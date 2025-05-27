/*LC simple line counting tool
 * by Samuel .A Johnson 
 * Under GPL 0x3+	     */
#include <stdio.h>
#include <string.h>
#include "libs.h"




int main(int argc,char **argv){
	int lines = 0;
	char *ar = NULL;//habit to declare pointers null
  int check; // variable to check for -h
  if(argc == 1){
		puts("Error! No file specifed use -h for help");
		return 0;
	}
  check = strcmp(argv[1],"-h");
	if(check == 0){
		printf("lc: line counter\nUSAGE: lc (filename)\n-s to pipe stdin input\n");
		return 0;	
	}
	procFile(argv,&ar,argc);
	
	while(*ar != '\0'){
		if(*ar == '\n'){
			lines++;
		}
		ar = ar + 1;//funny pointer magic equal to adding one to a counter then checking it with the if statement
	}
	printf("%d:Lines\n",lines); 
	return 0;
}
