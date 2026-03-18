
#include <stdio.h>
 
int main() {
    
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,b1,b2 = 0;
    
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9 );
    
    b1 = (n1*1+n2*2+n3*3+n4*4+n5*5+n6*6+n7*7+n8*8+n9*9) % 11;
    b2 = (n1*9+n2*8+n3*7+n4*6+n5*5+n6*4+n7*3+n8*2+n9*1) % 11;
    
    
    if(b1 == 10){
        
        b1 = 0;
    }
    
    if(b2 == 10){
        
        b2 = 0;
    }
    
    
    printf("%d%d%d.%d%d%d.%d%d%d-%d%d", n1,n2,n3,n4,n5,n6,n7,n8,n9,b1,b2);

    return 0;
}
