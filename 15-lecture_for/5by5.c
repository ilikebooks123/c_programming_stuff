#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;
    
    for (i = 1; i == 1; i++){
        
        for ( j = 1; j <= 12; j++){
            
            if (j >= 1 && j <= 7){
                printf("*");
            }
        
            if (j == 5  ){
                printf("\n");
            }
        
            if (j == 6 ){
                printf("   *\n");
            }
            
            if (j == 8 ){
                printf("   *\n");
            }
            
            if ( j >= 8 && j <= 12 ){
                printf("*");
            }
            
        }

        printf("\n");

        
        
    }
    
    

}