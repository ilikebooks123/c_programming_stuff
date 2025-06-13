#include <stdio.h>

int globalvar = 20;

void myFunction(){
    printf("Value of global variable %d\n", globalvar);
}

int main(){
    printf("value of global variable: %d\n", globalvar);
    myFunction();
    
    return 0;
}