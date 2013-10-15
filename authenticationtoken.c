#include <security/pam_appl.h>  

char* AuthDirectory = "/var/lib/userserv/";

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int getUserInfo(char* authenticationToken) {
	char fileName[1024];
	if (strlen(authenticationToken)>40) return -1;
	
	strcpy(fileName,AuthDirectory);
	strcat(fileName,authenticationToken);
	struct stat fileInfo;
	int res=stat(fileName,&fileInfo);
	if (res<0) return -1;
	
	if (fileInfo.st_size > 0) {
		char fileData[1024];
		int dataSize=MIN(fileInfo.st_size,sizeof(fileData));
		int fd = open(fileName, O_RDONLY);
		if (fd<0) return -1;
		int readLength=read(fd,fileData,dataSize);
		close(fd);
		if (readLength!=dataSize) return -1;
		int uid = atoi(fileData);
		if (uid <=0) uid = -1;
		return uid;
	} 
	return -1;	
}

void generateRandomKey(char* buffer,int bufferLength) {	 
	 int len = bufferLength; 
	 int fd = open("/dev/random",  O_RDONLY);
	 if (fd<0) fail("couldn't open /dev/random");	  
	 read(fd,buffer,len);
	 close(fd);	 
	 int i;
	 char* walk=buffer;
	 for (i=0; i<len;i++) {
		  *walk= (*walk&0xf)+75 | (*walk&32);
		  walk++;
	 }
}


int makeAuthenticationToken(int uid, char* tokenBuffer, int tokenBufferLength) {
	char* token=calloc(tokenBufferLength+1,1);
	generateRandomKey(token,tokenBufferLength);
	memcpy(tokenBuffer,token,tokenBufferLength);	
	char fileName[1024];
	strcpy(fileName,AuthDirectory);
	strcat(fileName,token);	
	free(token);
	int fd = open(fileName, O_CREAT| O_WRONLY | O_EXCL,0600);
	if (fd<0) fail("unable to create token file");
	char uidAsText[64];
	sprintf(uidAsText,"%d",uid);
	write(fd,uidAsText,strlen(uidAsText));
	write(fd,"\n",1);
	close(fd);
	return 0;
}

struct pam_response* callback_reply;

int converstion_callback(int num_msg, const struct pam_message **msg, struct pam_response **response, void *appdata_ptr)  
{ 
		logFormat("conversation callback occurred.  %d messages\n",num_msg); 
    *response = callback_reply;  
     return PAM_SUCCESS;  
}  

struct passwd* checkUserPass(const char* user,  const char* pass) {
	logFormat("getUidFromUserPass('%s','%s')\n",user,pass);
	const struct pam_conv local_conversation = { converstion_callback, NULL };
	pam_handle_t *local_auth_handle = NULL;
	
	int retval;
	retval=pam_start("userserv",user,&local_conversation,&local_auth_handle);
	logFormat("pam_start() returned %d\n",retval);
	if (retval != PAM_SUCCESS) {
		return NULL;
	}
	
	callback_reply=(struct pam_response *) calloc(1,sizeof(struct pam_response));
	callback_reply->resp=strdup(pass);//freed by pam?
	callback_reply->resp_retcode=0;
	
	logText("calling pam_authenticate");
	retval = pam_authenticate(local_auth_handle,0);
	logFormat("pam_authenticate() returned %d\n",retval);
	
	if (retval != PAM_SUCCESS) {
		if (retval == PAM_AUTH_ERR) {
			logText("Authentication failure");
		}
		else 
		{
			logFormat("pam_authenticate returned %d\n",retval);
		}
		return NULL;
	}
	struct passwd* pwd;
	const char* username; 
	retval=pam_get_item(local_auth_handle,PAM_USER,(const void**) &username);
	pwd=getpwnam(username);
	
	logFormat("Authenticated %s as uid:%d\n",user,pwd->pw_uid);
	pam_end(local_auth_handle,retval);
	
	return pwd;
}
