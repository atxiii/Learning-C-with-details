#include <stdio.h>

int main(){
	int sec;
	
	printf("Your seconds:");
	scanf("%d",&sec);

	int hours = (int)(sec / 3600);
	int minutes = (int)((sec - (hours * 3600))/60);
	int restSec = (int)( sec - (hours * 3600) - (minutes * 60) ); 
	
	printf("H:%d-M:%d-S:%d",hours,minutes,restSec);
	
	return 0;	
}