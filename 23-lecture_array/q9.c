#include <stdio.h>

int main(){
    long numbers[5] = {1000, 2000, 3000, 4000, 1000};
    int i = 0;
    int sum1 = numbers[0];

    for (i = 1; i < 5; i++){
        
         if (sum1 == numbers[i+1]){
            printf("there is a duplicate");
        }
        
    }
    
}
