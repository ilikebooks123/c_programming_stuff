#include <stdio.h>

// function declaration
int fibonacci(int n);

int main(){
    int number;
    printf("Enter a non-negative integer");
    scanf("%d", &number);

    if (number < 0){
        printf("Fibonacci can not be defined for negative\n");
    } else{
        printf("The %d-th Fibonacci number is %d\n", number, fibonacci(number));
    }
    
    return 0;

}

//recursive function definition
int fibonacci(int n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else{ // recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
}