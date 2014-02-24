
#define WEBSOCKET_MAGIC "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"

int captureCommandOutput(char* command,char* buffer,int bufferSize) {
	FILE* commandPipe = popen(command,"r");
	int result = fread(buffer,1,bufferSize,commandPipe);
	fclose(commandPipe);
	return result;
}

struct WebSocketMessageHeader {
  union {
    struct {
      unsigned int OP_CODE : 4;
      unsigned int RSV1 : 1;
      unsigned int RSV2 : 1;
      unsigned int RSV3 : 1;
      unsigned int FIN : 1;
      unsigned int PAYLOAD : 7;
      unsigned int MASK : 1;
    } bits;
    uint16_t short_header;
  };
};

void sendWebSocketFrame(int socketfd,char* data, unsigned int length)
{
	struct WebSocketMessageHeader header16;
	header16.short_header=0;
	
	if (length < 126) {
		header16.bits.FIN=1;
		header16.bits.PAYLOAD=length;
		header16.bits.OP_CODE=2;//binary frame
		write(socketfd,&header16,2);
		write(socketfd,data,length);
	}
}

char* aprintf(char* text,...) {
	char* result;
	va_list arglist;
	va_start(arglist, text);
	int length=vasprintf(&result,text, arglist);	
	return (length<0)?NULL:result;
}

 
void webSocketUpgrade(int socketfd, char* websocket_key, char* websocket_protocol, char* websocket_version, char* origin) {
	char* command = aprintf("echo -n %s%s|sha1sum | awk '{print $1}' |xxd -r -p | base64",websocket_key,WEBSOCKET_MAGIC);	
	if (command==NULL) fail("webSocketUpgrade A");	
	char accept_sha1[32];
	int acceptSize=captureCommandOutput(command,accept_sha1,sizeof(accept_sha1));
	free(command);
	accept_sha1[28]=0;
	dprintf(socketfd,
	   "HTTP/1.1 101 Switching Protocols\r\n"
	   "Upgrade: websocket\r\n"
	   "Connection: Upgrade\r\n"
	   "Sec-WebSocket-Accept: %s\r\n"
	   "Sec-WebSocket-Protocol: %s\r\n"
	   "\r\n",accept_sha1,websocket_protocol);

	dup2(socketfd,STDIN_FILENO);
	dup2(socketfd,STDOUT_FILENO);
	char* argv[3]={"launch-websession","testarg",NULL};
	execv(argv[0],argv);
	/*
  for(;;) {
		sleep(10);
		sendWebSocketFrame(socketfd,"Bleep!",6);
		logText("Bleep!");
	}*/
}


