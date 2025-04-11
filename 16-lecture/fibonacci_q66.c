#include <stdio.h>

int main(){
    int count;
    int num0 = 0;
    int num1 = 1;
    int total;

    scanf("%d", &count);
    
    for (int i = 1; i < count; i++){
        
        if (i == 1){
            printf("%d ", num0);
        }
        
        printf("%d ", num1); 

        total = num0 + num1;

        num0 = num1;
        num1 = total;
    }
    

    



}