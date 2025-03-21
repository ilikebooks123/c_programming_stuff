#include <stdio.h>

int main(){

    int count = 1;
    int sum = 0;

    while (count < 10){
        sum += count;
        printf("current sum: %d\n", sum);
    }
    
    return 0;
}