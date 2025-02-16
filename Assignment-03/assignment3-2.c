#include <stdio.h>

int main(){
	char firstName[20];
	char lastName[20];
	printf("Enter your name");
	scanf("%19s", firstName); // %19s is for prevent overflowing
	printf("Enter your lastname");
	scanf("%19s", lastName); // we don't need to use & before lastname and firstname because array act as pointer.
	printf("Welcome, %s %s!\n",firstName, lastName);	
	return 0;
}

