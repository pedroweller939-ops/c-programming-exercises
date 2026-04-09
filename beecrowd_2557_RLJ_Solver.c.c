//C beecrowd | 2557 R+L=J

#include <stdio.h>

int main(){
	
	char inp[20];
	int y;
	
	scanf("%s", &inp);
	
	for(y = 0; inp[y] != '\0'; y++){
		
		
		if(inp[y] == '+'){
			
			y++;
			
		}
		
		
		if(inp[y] == '='){
			
			y++;
			
		}
	
		printf("%c", inp[y]);
			
	}
	
	return 0;
}
