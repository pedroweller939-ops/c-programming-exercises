#include <stdio.h>

int main(){

int Tests, PA, PB, Time = 0; // T: Testes, PA: Population A, PB: Population B, Time: Time in years.
double GA, GB = 0.0;     // GA: Growth of population A(%), GB: Growth of population B(%).


scanf("%d", &Tests);


if( Tests >= 1 && Tests <= 3000){
	
	
	while (Tests > 0){
		
		scanf("%d %d %lf %lf", &PA,&PB,&GA,&GB);
		
		if(PA >= 100 && PA < 1000000 && PB > PA && PB <= 1000000 && GA >= 0.1 && GA <= 10.0 && GB <= 10.0 && GB >= 0.0 && GA > GB){
			
			
				
				while(PA <= PB){
					
					
					
					
				    PA += (int)(PA * (GA / 100.0));
				    PB += (int)(PB * (GB / 100.0));
				    Time ++;
				    
				    if(Time > 100){
				    	break;
					}
				
				}
				
			
			
			
			if(Time > 100){
				
				printf("Mais de 1 seculo.\n");
				
			}
			
			else{
				
				printf("%d anos.\n", Time);
				
			}
			
		}
		Tests--;
		Time = 0;
	}	
}


return 0;


} // Fechamento int main()

