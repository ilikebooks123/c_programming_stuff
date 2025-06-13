#include <stdio.h>

int fib(int num1);

int main(){
    int number = 5;
    while (number < 1){
        printf("%d\n", fib(number));
    }
    
    printf("%d", fib(number));

}

int fib(int num1){
    int n = 1;
    if (num1 == 1){
        return 1;
    }
    
    else{
    return num1 + fib(num1 - (n+1)); 
    }
}