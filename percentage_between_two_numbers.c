#include <stdio.h>

int main(){
	
	float A,N = 0.0;
	float dife = 0.0;
	
	scanf("%f %f", &A, &N);
	
	
	if(A != 0){
	    
	    	dife = ((N - A)/A) * 100;
	    	printf("%.2f%%\n", dife);
	}

	return 0;
}
