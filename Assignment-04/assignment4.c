#include <stdio.h>


// #define PI 3.14159
const double PI  = 3.141592653589793;


int main(){
	
	double radius; 
	double a;
	
	printf("Add a number to calc radius area:");
	scanf("%lf",&radius);
	
	a = PI * radius * radius;
	
	printf("%lf",a);
	return 0;
}