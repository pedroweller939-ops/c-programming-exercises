
#include <stdio.h>

int main(){
	
	char inp[100];
	int y = 0,num = 0,digit, var1,var2,var3;
	
	
	
	
	
	while (scanf("%s", inp) != EOF){  
		
	 
	
		
		
	    while(inp[y] != '+'){  // While the char is diferent than '+'.
	    	
			if(inp[y] == 'R'){ // Check if the current operand is the variable 'R'.
				var1 = 'R';
		    }
		
		    else{
		    	
				digit = inp[y] - '0';  // Convert numeric character to its integer value.
		        num = (num * 10) + digit; // Accumulate digits to form the complete integer.
	  	        var1 = num;  
	
		    }	
		    y++;	
		
	    }
	
	    num = 0;
	    y++;
		
	    while(inp[y] != '='){ // While the char is diferent than '='.
	    	
			if(inp[y] == 'L'){ // Check if the current operand is the variable 'L'.
				var2 = 'L';
			
		    }
		
		    else{
		    	
		    	digit = inp[y] - '0';  // Convert numeric character to its integer value.
		        num = (num * 10) + digit; // Accumulate digits to form the complete integer.
		        var2 = num;
		   	} 	
		    y++;
		
	    }
	
	    num = 0;
	    y++;
		
	    while(inp[y] != '\0'){ // Iterate until the end of the string (null terminator).
	    	
	    	if(inp[y] == 'J'){ // Check if the current operand is the variable 'J'.
	    		var3 = 'J';
			
		    }
		
		    else{
		    	
		    	digit = inp[y] - '0';  // Convert numeric character to its integer value.
		        num = (num * 10) + digit; // Accumulate digits to form the complete integer.
		        var3 = num;
		    
		    }	
		    y++;
	    
		}

    
    
	    if(var1 == 'R'){
	        printf("%d\n", var3 - var2 );	
	   		
	    }
	
	    if(var2 == 'L'){
	   	     printf("%d\n", var3 - var1 );
		
	    }

	    if(var3 == 'J'){
	        printf("%d\n", var1 + var2 );	
			
        }
       
        var1 = 0;
        var2 = 0;
        var3 = 0;
        num = 0;
        y = 0;
    
    }
	
    return 0;
    
}
