#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char yourname[40];
	
	printf("Add your name:");

	scanf("%39s",yourname);
	
	// Allocate Memory as we need
	char *name = malloc(strlen(yourname)+1); // 1 is for \0 terminator
	
	if(name==NULL) return 1;
	
	// Copy to memory
	strcpy(name, yourname);
	
	printf("Name is %s", name);
	
	free(name);
	
	return 0;
}