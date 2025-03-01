#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;

    int row = 2;
    int col = 2;

    for (i = 1; i <= row ; i++){
        
        for (j = 1; j <= col; j++){
            
            if (i == 1 || i == row || j == col || j == 1){
                printf("* ");
            }
            
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }
    



}