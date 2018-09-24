/*********************************
 * Program by Bryce Hutton
 * Based on tutorial from: https://www.techwalla.com/articles/how-to-copy-paste-in-putty
 * Date: 9:14/2018
 *
 * PROGRAM: Program is used to create a server for a server-client connection using UDP
 */

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define nofile "File not found."
#define NET_BUF_SIZE 32


// Function to clear the buffer
void clearBuf(char* b){
	for(int i = 0; i < NET_BUF_SIZE; i++)
		b[i] = '\0';
}

// Function to send files
int sendFile(FILE* fp, char* buf, int s){
	int len;
	//If there is no file sent, then send back a "File not found", with nofile.
	if(fp == NULL){
		strcpy(buf, nofile);
		len = strlen(nofile);
		buff[len] = EOF;
		//Not sure what this is for?
		for(int i = 0; i < len; i++)
			buf[i] = Cipher(buf[i]);

	}
}
