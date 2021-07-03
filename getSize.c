#include <stdio.h>



unsigned int getSize(FILE*fp){ //This function get's the size of the text data in a file
	unsigned int size; 
	fseek(fp,0L,SEEK_END);
	size = ftell(fp);
	fseek(fp,0L,SEEK_SET);
	if(size >= 0){
		return size;
	}
}
