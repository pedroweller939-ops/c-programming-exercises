#include <stdio.h>
#include <string.h>

int main(){
	// N: number of deletion attempts | i: iterator for strings 
	int N = 0, i = 0;
	
	// Using 5001 to safely support the 1000-character limit + null terminator
	char Be[5001] = "",Af[5001] = "", Inv[5001] = "";
	
	
	scanf("%d", &N);
	scanf("%s", Be);
	scanf("%s", Af);
	
	// If N is even, the bits flip back to their original state
	if (N % 2 == 0){
		
		// strcmp returns 0 if strings are identical
		if(strcmp(Be,Af) == 0){
			printf("Deletion succeeded\n");
		}
		
		else{
			printf("Deletion failed\n");
		}
	}
	
	// If N is odd, every bit must be inverted
	else{
		
		// Bit flipping algorithm: 0 becomes 1, 1 becomes 0
		 while(Af[i] != '\0'){ 
			
			if(Af[i] == '0'){
				Inv[i] = '1';
			}
			
			if(Af[i] == '1'){
				Inv[i] = '0';
			}			
			
			i++;	
		}
		
		Inv[i] = '\0'; // Manually null-terminate the new string
		
		
		// Compare the original 'Before' string with the 'Inverted' result
		if(strcmp(Be,Inv) == 0){
			
			printf("Deletion succeeded\n");
		}
		
		else{
			
		printf("Deletion failed\n");
	
			
		}

	}
	return 0;
}



