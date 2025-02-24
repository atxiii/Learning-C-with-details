#include <stdio.h>


int main(){
	
	int num;
	int div;
	
	printf("Enter a numerator: ");
	scanf("%d",&num);
	
	printf("Enter a denominator: ");
	scanf("%d",&div);
	
	if(num % div == 0) printf("There is NOT a remainder!");
	else printf("There is a remainder!");
	
	return 0;
}