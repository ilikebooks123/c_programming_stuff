#include <stdio.h>

// function declaration
int add(int a, int b);

int main(){
    
    int result = add(15, 3);// calling funciton
    printf("the result is %d\n", result);
    result = add(11, 3);// calling funciton
    printf("the result is %d\n", result);
    printf("the result is %d\n", add(5, 11));
    return 0;
    
}
// Function definition
// return type is int, funciton name is add, paraeters are 2 ints
int add(int a, int b){
    return a + b;// Function body: returns the sum of a and b
}