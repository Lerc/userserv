#define _GNU_SOURCE

#define LOGGING

#include <unistd.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <pwd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/ip.h>

#include "urlcode.c"

#define BUFFER_SIZE 8192
#define HEADER_LIMIT 200

void logText(char* text);
void fail(char* text);
void logFormat(char* text,...);

#include "readuntil.c"
#include "authenticationtoken.c"
#include "websocketbridge.c"


#ifdef LOGGING

void logText(char* text) {
	int fd = open("userserv.log", O_CREAT| O_WRONLY | O_APPEND,0644);
	if (fd>=0) {
		write(fd,text,strlen(text));
		write(fd,"\n",1);
		close(fd);
	} 
}

void logFormat(char* text,...) {
	int fd = open("userserv.log", O_CREAT| O_WRONLY | O_APPEND,0644);
	if (fd>=0) {
		va_list arglist;
		va_start(arglist, text);
		vdprintf(fd,text, arglist);
		close(fd);
	} 
	
}

void fail(char* text) {
	char msgBuffer[16384];
	sprintf(msgBuffer,"ERROR: %s  (errno=%d) exiting process %d",text,errno,getpid());
	logText(msgBuffer);
	exit(3);
}
#else 
void logText(char* text) {}
void logFormat(char* text,...) {}
void fail(char* text) {exit(3);}
#endif

void scrub() {
	int i;
	for (i=0;i<32;i++) {
		 close(i);
	}
}

void sendHTMLPage(int fd, char* status,char* headers, char* content) {
	dprintf(fd,"HTTP/1.0 %s \r\n%sContent-Length: %zu\r\n\r\n%s", status,headers, strlen(content),content);
}

void sendSimpleHTMLPage(int fd, char* status, char* content) {
	dprintf(fd,"HTTP/1.0 %s \r\nContent-Length: %zu\r\n\r\n%s", status, strlen(content),content);
}

void sendFile(int socketfd, char* status, int filefd) {
	long length = (long)lseek(filefd, (off_t)0, SEEK_END); /* lseek to the file end to find the length */
	lseek(filefd, (off_t)0, SEEK_SET);
	dprintf(socketfd,"HTTP/1.1 %s \r\nContent-Length: %ld\r\nConnection:close\r\n\r\n",status, length);
	char buffer[BUFFER_SIZE];
	int bytesRead;
	while ((bytesRead = read(filefd,buffer,BUFFER_SIZE)) >0) {
		write(socketfd,buffer,bytesRead);
	}
}

void sendFileChunked(int socketfd, char* status, int filefd) {
	dprintf(socketfd,"HTTP/1.1 %s \r\nTransfer-Encoding: chunked\r\nConnection:close\r\n\r\n",status);
	char buffer[BUFFER_SIZE];
	int bytesRead;
	while ((bytesRead = read(filefd,buffer,BUFFER_SIZE)) >0) {
		dprintf(socketfd, "%x\r\n",bytesRead); 
		write(socketfd,buffer,bytesRead);
		dprintf(socketfd, "\r\n"); 
	}
	dprintf(socketfd, "0\r\n\r\n"); 
}

char* findHeader(int start, int headerCount, char** headerList, const char* name) {
	int walk = start;
	int namelen=strlen(name);
	while (walk < headerCount) {
		if (strncmp(name,headerList[walk],namelen) == 0) {
			char* result=headerList[walk]+namelen;
			return result+strspn(result," \t");
		}
		walk+=1;
	}
	return NULL;
}

void sendLoginPage(int socketfd) {
	char* loginPage="<html><head>"
								"<style>"
										"body{background-color:grey; font-family: sans-serif}"
										"input{background-color:white}"
										"#loginBox{position:absolute;top:40%; left:0px; right:0px;}"
										"input{float:right;width:16em;}"
										"#loginBox>form>div{padding: 8px}"
										"#loginBox>form{background-color: #dfd;margin: 0 auto; box-shadow:0px 0px 0px 2px black,3px 3px 12px 2px black;width:20em; padding: 40px; border-radius: 8px 64px 8px 64px}"
								"</style></head>"
								"<body><div id=\"loginBox\">"
									 "<form action=\"/login\" method=\"post\"><div><label for=\"user\">User Name</label><input type=\"text\" id=\"user\" name=\"user\" /></div><div><label for=\"pass\">Password</label><input type=\"password\" id=\"pass\" name=\"pass\"/></div><div><input type=\"submit\" value=\"login\"></div></form>"
								"</div></body></html>";
	char* headers = "";
	logText("Sending login page");

	sendHTMLPage(socketfd,"200 ok",headers,loginPage);	
}

char* expandFilename(const char* original) {
	return strdup(original);	
}

void handleConnection(int socketfd)  {
	static char buffer[BUFFER_SIZE+1];
	static char* headers[HEADER_LIMIT+1];
	int i;
	int headerCount=0;
	//int requestSize = read(socketfd,buffer,BUFFER_SIZE);
	int requestSize = readUntil(socketfd,crlfcrlfCheck,buffer,BUFFER_SIZE);
	if (requestSize ==0 || requestSize == -1) {
		fail("failed to read browser request");		
	}
	logText(buffer);
	int done = 0;
	char mode = 0; /*  */
	for (i=0;i<requestSize;i++) {
		switch(mode) {
			case '\r':  
				if (buffer[i] == '\n') {
					buffer[i-1]=0;
					mode=0;
					done = (*headers[headerCount]==0) || (headerCount++ == HEADER_LIMIT);
				}
				break;
			case 0:
			  headers[headerCount]=&buffer[i]; 
			default:
			  mode=buffer[i];
			  if (mode==0) done=1;  /* catch headers containing zeros */
		}
		if (done) break;
	}
	int bodyStart=i+1;
  int bodyLength=requestSize-bodyStart;
  
	headers[headerCount]=NULL; /*null terminated list*/

  logFormat("%d header lines\n",headerCount);
	logText("we got some headers");
	for (i=0; i<headerCount;i++) {
		logFormat("%d: %s\n",i,headers[i]);
	}
	logText("That was them headers");
	
	/*
	logText("looking for User-Agent:");	
	char* userAgent=findHeader(0,headerCount,headers,"User-Agent:");
	if (userAgent==NULL) {logText("No User-Agent");} else	{logText(userAgent);}
	*/
	
	char* aCookie = findHeader(0,headerCount,headers,"Cookie:");
	int uid=getUserInfo(aCookie);
  logFormat("uid of %d\n",uid);
	
	if (uid <= 0) {
		if (strncmp("POST /login ",headers[0],12) == 0 ) {
			 //for a non-logged-in user POST to /login try and read user credentials.  
			logText("Login request received");
			char userpass[300];
			struct passwd* pwd = NULL;
			strncpy(userpass,&buffer[bodyStart],300);			
			if (userpass[299] == 0) {
				char* user = NULL;
				char* pass = NULL;
				user = strstr(userpass,"user=")+5;
				pass = url_decode(strstr(userpass,"pass=")+5);
				char* ampersand;
				while((ampersand=strchr(userpass,'&'))!=NULL) {
					*ampersand = 0;
				}
				logFormat("I think the userName is '%s'\n",user);
				logFormat("I think the passWord is '%s'\n",pass);				
				pwd = checkUserPass(user,pass);
				free(pass);				
			}
			char* resultPage;
			if (pwd != NULL) {
				logText("setting cookie");
				char* pageHeaders=strdup("Set-Cookie: 12345678901234567890123456789012; Secure; HttpOnly\r\nContent-Type text/html\r\n");
				char* token=pageHeaders+12;
				makeAuthenticationToken(pwd->pw_uid,token,32); 
				logText(pageHeaders);
				resultPage=
				"<html><head></head><body"
					"<div>Login Successful</div>"
				"</body></html>";
				sendHTMLPage(socketfd,"200 ok",pageHeaders,resultPage);
				free(pageHeaders);
			} else {
				resultPage=
				"<html><head></head><body"
					"<div>Login Failed</div>"
				"</body></html>";				
				sendSimpleHTMLPage(socketfd,"401 Unauthorised",resultPage);
			}			
		} else {
			sendLoginPage(socketfd);
		}
	}	else {			
		setuid(uid);
		//if we get to here, the request sent a token identifying them as a 
		//valid user and we have dropped privileges to be that user.
		//now we can set about serving the user request.
		char* upgrade = findHeader(0,headerCount,headers,"Upgrade:");
		if (upgrade) {
			 //Try using websockets
			 char* websocket_key = findHeader(0,headerCount,headers,"Sec-WebSocket-Key:");
			 char* websocket_protocol = findHeader(0,headerCount,headers,"Sec-Websocket-Protocol:");
			 char* websocket_version = findHeader(0,headerCount,headers,"Sec-WebSocket-Version:");
			 char* origin = findHeader(0,headerCount,headers,"Origin:");
			 webSocketUpgrade(socketfd,websocket_key,websocket_protocol,websocket_version,origin);
			 //webSocketUpgrade should never return
		}
		
		if (strncmp("GET ",headers[0],4) == 0 ) {
			char* nameStart=headers[0]+4;
			int nameLen = strcspn(nameStart," ");
			char* urlName=strndup(nameStart,nameLen);
			char* fileName=url_decode(urlName);
			logFormat("url request '%s'\n",urlName);
			logFormat("filename request '%s'\n",fileName);
			char* newFileName=expandFilename(fileName);
			free(fileName); fileName=newFileName;			
			struct stat fileInfo;
			int res=stat(fileName,&fileInfo);
			if (res !=0)  {
				if (errno == EACCES) {
					sendSimpleHTMLPage(socketfd,"403 Forbidden","403: Forbidden");
				} else {
					sendSimpleHTMLPage(socketfd,"404 Not Found","404: Not Found");
				}
			}	else {
				if (S_ISREG(fileInfo.st_mode)) {
					int filefd=open(fileName,O_RDONLY);
					if (filefd < 0) {
						sendSimpleHTMLPage(socketfd,"403 Forbidden","403: Forbidden");
					} else {
						sendFileChunked(socketfd,"200 OK",filefd);
						close(filefd);
					}
				}
				if (S_ISDIR(fileInfo.st_mode)) {
					char* command;
					char* awkline = "BEGIN {printf(\"{\\\"path\\\":\\\"%s\\\",\\n \\\"contents\\\":[\\n\",path)} END{print\"\\n  ]\\n};\\n\"}  NR > 2 { printf(\",\\n\") } NR >1 { printf(\"    {\\\"filename\\\":\\\"%s\\\", \\\"attributes\\\":\\\"%s\\\", \\\"owner\\\":\\\"%s\\\", \\\"size\\\":%s}\", $9, $1, $3, $5) }";
					//int commandLength = asprintf(&command,"ls -AlQ %s|  awk -v path=%s '%s'",fileName,fileName,awkline);
					int commandLength = asprintf(&command,"./jsondir '%s'",fileName);
					logText(command);
					if (commandLength>0) {
						FILE* commandPipe = popen(command,"r");
						if (commandPipe) { 
							int commandfd=(fileno(commandPipe));
							sendFileChunked(socketfd,"200 OK",commandfd);
							pclose(commandPipe);
						} else {
							sendSimpleHTMLPage(socketfd,"500 Internal Server Error","popen failure");
						}
						free(command);
					} else {
						sendSimpleHTMLPage(socketfd,"200 OK","That's a directory");
					}  
				}

			}
			free(fileName);
			free(urlName);
		}
	}
	logText("done response, closing connection");
	sleep(1);
	close(socketfd);
	exit(1);
}

void serverListen(int port) {
	int listenfd = socket(AF_INET, SOCK_STREAM,0);
	static struct sockaddr_in serverAddress;
	static struct sockaddr_in clientAddress;
	
	
	serverAddress.sin_family = AF_INET;
	//serverAddress.sin_addr.s_addr = htonl(INADDR_ANY);
	serverAddress.sin_addr.s_addr = htonl((127<<24)|1); //127.0.0.1
	serverAddress.sin_port = htons(port);
	
	
	if (listenfd<0) fail("Couldn't create listen socket");

  if ( bind(listenfd,(struct sockaddr*)&serverAddress,sizeof(serverAddress)) <0 )
		fail("couldn't bind socket");
	
	if (listen(listenfd,64) < 0) 
		fail("listen() failed");
	
	for(;;) {
		int length = sizeof(clientAddress);
		int socketfd = accept(listenfd,(struct sockaddr *) &clientAddress, &length);
    if (socketfd < 0) fail("failure on accept()");
    
    int pid = fork();
    if (pid < 0) fail("fork Failed!?");
    if (pid == 0) {
			close(listenfd);
			handleConnection(socketfd); 
			fail("We should never have gotten to this line of code");
		}
		close(socketfd);
	}
	
}

void flushOldFiles() {
	system("find /var/lib/userserv -type f -mtime +1 -exec rm {} \\;");
}
void init() {
	system("mkdir -p /var/lib/userserv -m 700");
	flushOldFiles();
}

int main (int argc, char **argv) {
	init();
	if (fork() !=0 ) return 0;
	
	(void) signal(SIGCLD, SIG_IGN);
	(void) signal(SIGHUP, SIG_IGN);
	
	scrub();
	
	logText("Starting");
	serverListen(8082);	
	fail("testing failure");
}
