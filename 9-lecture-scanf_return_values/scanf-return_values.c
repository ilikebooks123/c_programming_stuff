#include <stdio.h>

int main(){

    int a, b;
    printf("please enter two numbers:");
    int result = scanf("%d %d", &a, &b);   // trying to read two integers
    printf("number of valid input: %d\n", result); //print the return value
    printf("%d %d ", a ,b);
    return 0;

}