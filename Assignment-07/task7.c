#include <stdio.h>
#include <math.h>


int main(){

	double A,B,C;
	
	printf("Enter A: ");
	scanf("%lf",&A);

	
	if(A == 0){
		printf("A  cannot be ZERO(0)! ");
		return 1;
	}
	
	printf("Enter B: ");
	scanf("%lf",&B);
	
	printf("Enter C: ");
	scanf("%lf",&C);
	
	
	double discirminant = ( B * B ) - ( 4 * A * C );
	
	if(discirminant < 0) printf("Descriminant is negative, not real solution");
	else if(discirminant == 0 ) {
		double x = -B / ( 2 * A );
		printf("One Real solution: %lf", x);
	}else{
		double sqrtD = sqrt(discirminant);
		double x1 = (-B + sqrtD) / (2 * A);
		double x2 = (B + sqrtD ) / (2 * A);
		
		printf("The solution using the '+' operator is: %.6f\n", x1);
        printf("The solution using the '-' operator is: %.6f\n", x2);
		
		double check1 = A * x1 * x1 + B * x1 + C;
        double check2 = A * x2 * x2 + B * x2 + C;

        if (fabs(check1) > 0.000001) {
            printf("You might want to double-check %.6f...\n", x1);
        }

        if (fabs(check2) > 0.000001) {
            printf("You might want to double-check %.6f...\n", x2);
        }
	}
	

	
	
	return 0;
}