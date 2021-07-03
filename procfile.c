#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libs.h"
void procFile(char **argv,char **ar){ 
	unsigned int size;
	FILE *fp = fopen(argv[1],"r");
	char tempAr[250];
	size = getSize(fp);
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
