#include <stdio.h>


int main(){
	
	char yourname[40];
	
	printf("Type your name and lastname with space?\n");

	fgets(yourname, sizeof(yourname), stdin);	
	printf("fgets Accept space, so your name is: %s",yourname);
	getchar(); // wait to get a char then continue... I used it to see result before exit.
	return 0;	
}