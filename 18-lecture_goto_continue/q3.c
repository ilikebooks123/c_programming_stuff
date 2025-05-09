#include <stdio.h>

int main(){
    int input;
    int added = 0;

    printf("please enter a series of integers:");

    while (input >= 0){
        
        scanf("%d", &input);
        added+=input;
    }
    
    printf("sum is: %d", added);
    
    return 0;
}