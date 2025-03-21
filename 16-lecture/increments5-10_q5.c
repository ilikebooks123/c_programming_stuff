#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;
    int sum = 0;
    int total;
    
    for (int i = 0; i < 6; i++){
        total = a + b;
        
        sum+=total;
        
        a++;
        b--;
        
    }
    
    printf("Total sum is: %d\n", sum);

}