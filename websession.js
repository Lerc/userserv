var net= require('net');
var websocket=require('websocket');
var socket = new net.Socket({fd:0, readable:true, writeable:true});

var subProtocol = "dummy";
var localSocketPath = "/tmp/websession_socket."+process.pid;

process.env.WEBSESSION=localSocketPath;

var connectCounter = 1;
var connections = [];
function getNewId(){
	return connectCounter++;
}

var opcode_open_notify=0;
var opcode_close_notify=1;
var opcode_data=2;

function closeAllConnections() {
	connections.forEach(function(e,i,a){if (e) {e.end(); delete a[i];}} );	
}

var config = {
	httpServer : null,
	maxReceivedFrameSize: 65536,
	maxReceivedMessageSize: 262144,
	fragmentOutgoingMessages: true,
	fragmentationThreshold: 16384,
	keepalive: true,
	keepaliveInterval: 20000,
	keepaliveGracePeriod:1000,
	assembleFragments: true,
	autoAcceptConnections: false,
	closeTimeout: 5000,
	disableNagleAlgorithm : true,
}

function makeHeader(id,cmd) {
	var result = new Buffer(16);
	result.fill(0);
	result.writeInt32LE(id,0);
	result.writeUInt8(cmd,4);	
	return result;
}

function sendInfoMessage(text) {
	 var header = makeHeader(0,99);
	 var data = new Buffer(text);
	 header.writeInt32LE(data.length,8);	 
	 webConnection.sendBytes(Buffer.concat([header,data]));		
}

var webConnection = new websocket.connection(socket, [], subProtocol, false, config);

webConnection.on("message",function(message)  {
	if (message.type==="binary") {
		data=message.binaryData;
		var id = data.readInt32LE(0);
		var opcode = data.readUInt8(4);
		var length = data.readInt32LE(8);
		
		
		var recipient = connections[id];	
		//sendInfoMessage("got message of opcode "+opcode);
		if (recipient) {
			if (opcode==opcode_close_notify) {
				sendInfoMessage("remote closed connection so we're killing our side");
				recipient.end(data.slice(16));
				delete connections[id];
			} else {
				recipient.write(data.slice(16));
			}
		}
	}
});

webConnection.on("close", closeAllConnections);


function handleNewConnections(c) {
	var id = getNewId();
	id=Math.floor(Math.random()*10000);
  c.id=id;
	connections[id] = c;
	sendInfoMessage("connections :"+(connections.length));
	console.log("\n\nnew connection arrived");
	console.log(connections);

	function sendCloseNotification() {
		var header = makeHeader(id,opcode_close_notify); 
		webConnection.sendBytes(header);
	}
	
	function sendData(data) {
		var header = makeHeader(c.id,opcode_data); 
		header.writeInt32LE(data.length,8);
		webConnection.sendBytes(Buffer.concat([header,data]));		
	}
	
	c.on("data",function (data) {
		sendData(data);
	});
	
	c.on("close", function () {
		sendCloseNotification();
		delete connections[id];		
	});
	 
	webConnection.sendBytes(makeHeader(id,opcode_open_notify)); 
}

var server = net.createServer();
server.on("connection",handleNewConnections)
server.listen(localSocketPath);
server.unref();

process.on("exit", function () {
	server.close();
	console.log("shutting down websession")}
);

var spawn = require('child_process').spawn;

var manager=spawn("./launch-websession-manager", []); 

console.log(process.env);
console.log("init done, just event handling now.");
