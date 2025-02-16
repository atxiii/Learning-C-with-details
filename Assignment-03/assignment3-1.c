#include <stdio.h>


int main(){
	int a;
	printf("Enter your phone number:"); // must use double qoutes (") in printf.
	scanf("%10d",&a); // Pass the location of variable
	printf("Your number is: %d", a); // limit 10 numbers
	return 0;
}