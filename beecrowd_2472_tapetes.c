#include <stdio.h>

int main(){
	long long int L,N,Count = 0,Tmax,Condition = 0;
	
	scanf("%lld %lld",&L,&N);
	
	Tmax = (L - N) + 1;
	Condition = Tmax;

	
	while (Condition < L){
		
		Count += 1;
		Condition += 1;
	}
	
	printf("%lld\n", (Tmax * Tmax) + Count);
	
	return 0;
}
