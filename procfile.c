#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libs.h"
void procFile(char **argv,char **ar,int argc){ 
	unsigned int size;
	FILE *fp; 
	if (argc == 1){
		fp = stdin;
		size = getSize(fp);
	}
	else{
	       	fp = fopen(argv[1],"r");
		size = getSize(fp);
	}
	char tempAr[250];
	*ar = calloc(size + 1,sizeof(char));
	if(*ar == NULL){
		puts("Failed to allocate memory");
		exit(1);
	}	

	while(fgets(tempAr,100,fp) != NULL){
		strcat(*ar,tempAr);
	}
	fclose(fp);
}
