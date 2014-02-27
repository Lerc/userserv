var net= require('net');
var fs= require('fs');
var child_process = require('child_process'); 
require('sugar');

var socketpath=process.env.WEBSESSION;

var connection = net.connect({path:socketpath});

var buf=" ";
var bufDepth=0;

function sendObject(ob) {
	connection.write(JSON.stringify(ob)+"\n");
}

function respond(request,ob) {
	var response = Object.clone(ob);
	response.operation="response";
	response.responseId=request.responseId;
	sendObject(response);
}

function failCall(request,errorText) {
	respond(request,{"error":errorText});
}

var callHandlers = {};

function standardResponse(err,result) {
	//this function expects the request to be bound in this.
	if (err) {
		failCall(this,"something bad!?!");
		return;
	}
	respond(this,{"result":result});
} 

function noErrorPossibleResponse(result) {
	//this function expects the request to be bound in this.
	respond(this,{"result":result});
} 

callHandlers.stat=function(request) {
	fs.stat(request.args.path,standardResponse.bind(request));
}

callHandlers.exists=function(request) {
	fs.exists(request.args.path,noErrorPossibleResponse.bind(request));
}

callHandlers.rename=function(request) {
	var a=request.args; 
	fs.rename(a.oldPath,a.newPath,standardResponse.bind(request));
}

callHandlers.symlink=function(request) {
	var a=request.args; 
	fs.symlink(a.srcPath,a.dstPath,standardResponse.bind(request));
}

callHandlers.mkdir=function(request) {
	var a=request.args; 
	fs.mkdir(a.path,a.mode,standardResponse.bind(request));
}

callHandlers.readlink=function(request) {
	var a=request.args; 
	fs.readlink(a.path,standardResponse.bind(request));
}

callHandlers.readFile=function(request) {
	var a=request.args; 
	fs.readFile(a.filename,a.options,standardResponse.bind(request));
}

callHandlers.writeFile=function(request) {
	var a=request.args; 
	fs.writeFile(a.filename,a.data,a.options,standardResponse.bind(request));
}

callHandlers.appendFile=function(request) {
	var a=request.args; 
	fs.appendFile(a.filename,a.data,a.options,standardResponse.bind(request));
}


callHandlers.exec=function(request) {
	var a=request.args; 
	child_process.exec(a.command,a.options,standardResponse.bind(request));
}


callHandlers.spawn=function(request) {
	var a=request.args; 
	child_process.spawn(a.command,a.args,a.options);
}


function handleCall(request){
	var call=callHandlers[request.callName];
	if (typeof(call) === 'function') {
		call(request);
	} else { 
		failCall (request,"no such function");
	}
}

function processBatch(batch) {
	var ob=JSON.parse(batch);
	console.log("batch received of length:"+batch.length);
	console.log(batch);
	//sendObject(ob);
	if (ob.operation=="call") {
		handleCall(ob);
	}
}

function pushData(data) {
	buf+=data;
	var nl;
	while ((nl=buf.indexOf('\n')) >=0) {
		if (nl === 0) {
			buf=buf.slice(1);
		}	else {
			var batch=buf.slice(0,nl);
			buf=buf.slice(nl+1);
			processBatch(batch);
		}
	}
}
connection.on('data', function(data) {
	pushData(data.toString());
});

connection.on('connect', function() {
		sendObject({"protocol":"SessionManager"});
});

connection.on('end', function() {
  console.log('client disconnected');
});
