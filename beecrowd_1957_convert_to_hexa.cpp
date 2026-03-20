#include <stdio.h>
#include <string.h>



int main(){
	
	int num,rest;
	int i = 0;
	char saida[20] = "";
	
	scanf("%d", &num);
	
	while(num > 0){
		
		rest = num % 16 ;
		num = num / 16;
		
		if (rest < 10){


			rest = rest + '0';
			
		}
		
		else{
			
			rest = rest + 55;
	}
	
	
	saida[i] = rest;
    i++;
		
	}
	saida[i] = '\0';
	
	for(int k = i - 1; k >= 0; k--){
		
		
		printf("%c", saida[k]);
	
	}
	
	
	return 0;
}





