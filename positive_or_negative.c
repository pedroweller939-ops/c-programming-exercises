#include <stdio.h>

int main(){
	
	int a = 0;
	
	printf("Insert a int value:\n");
	scanf("%d", &a);
	
	if(a > 0){
		
		printf("The entered value is higher than 0.\n");
		
	}
	else {
		printf("The entered value is lower or equal to 0.\n");
	}
	
	
}
