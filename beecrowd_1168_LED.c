

#include <stdio.h>

int main(){
	
	int c,y,digit,sum = 0;
	int led[10] = {6,2,5,5,4,5,6,3,7,6};
	char num[100] = "";
	
	scanf("%d", &c);
	
	while(c > 0){
		
		scanf("%s", &num);
		
		for(y = 0; num[y] != '\0'; y++){
			
			digit = num[y] - '0';
			sum += led[digit];
			
			
			
		}
		
		printf("%d leds\n", sum);
		sum = 0;
		c--;
	}
	
	return 0;
}
	

