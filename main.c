/*LC simple line counting tool
 * by Samuel .A Johnson 
 * Under GPL 0x3+	     */
#include <stdio.h>
#include "libs.h"




int main(int argc,char **argv){
	int lines = 0;
	char *ar = NULL;//habit to declare pointers null
	procFile(argv,&ar,argc);
	if (ar == NULL){
		puts("FAILED TO ALLOCATE MEMORY");
		return 1;
	}
	while(*ar != '\0'){
		if(*ar == '\n'){
			lines++;
		}
		ar = ar + 1;//funny pointer magic equal to adding one to a counter then checking it with the if statement
	}
	printf("%d:Lines\n",lines); 
	return 0;
}
