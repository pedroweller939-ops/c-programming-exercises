#include <stdio.h>
#include <string.h>



int main(){
	
	int num,rest;
	
	scanf("%d", &num);
	
	while(num > 0){
		
		rest = num % 16 ;
		num = num / 16;
		
		if (rest < 10){
			
			printf("%d\n", rest);
		}
		
		else{
				
			printf("%c\n", 55 + rest);
		}
		
	}
	
	
	return 0;
}


