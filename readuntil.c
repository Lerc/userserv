
typedef int (*terminatorCheck) (char* buffer, int dataLength, int newDataStartIndex);

int stringTerminatorCheck(char* terminator,int  terminatorLength, char* buffer, int dataLength, int newDataStartIndex) {
	int index = newDataStartIndex-terminatorLength;
	if (index<0) index=0;
	
	char* walk=buffer+index;
	return(strstr(walk,terminator)!=NULL);	
}

int crlfCheck(char* buffer, int dataLength, int newDataStartIndex) {
	return stringTerminatorCheck("\r\n",2,buffer,dataLength,newDataStartIndex);	
}

int crlfcrlfCheck(char* buffer, int dataLength, int newDataStartIndex) {
	return stringTerminatorCheck("\r\n\r\n",4,buffer,dataLength,newDataStartIndex);	
}

/*readUntil reads from a file descripter until 
 *	- an error occurs
 *	- bufferSize bytes have been read
 * 	-	the data satisfies the terminator condition causing the callback function to return true
 * 
 * NOTE: 
 * 	The data in the buffer may not finish at the terminator,
 * 	it will read until the data contains the terminator but there may be bytes of data
 *  past the terminator that arrived in the same read() call
 */ 
int readUntil(int fd, terminatorCheck callback, char* buffer, int bufferSize) {
	char* walk = buffer;
	int dataLength=0;
	
	while (dataLength < bufferSize) {
		int startOfNewData=dataLength;
		int readLength = read(fd,buffer+dataLength,bufferSize-dataLength);
		if (readLength <=0) return readLength;
		dataLength+=readLength;
		if (callback(buffer,dataLength,startOfNewData)) return dataLength;
	}
	return dataLength;
}
