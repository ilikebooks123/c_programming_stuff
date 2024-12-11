#include <stdio.h>

int main(){

    int a = 0;
    int adding = 0;
    while(a<=5){
        a++;
        adding = a-1 + a;

    }
    
    printf("%d", adding);
    
    return 0;

}