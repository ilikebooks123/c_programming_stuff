#include <stdbool.h>
#include <stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    bool less = a > b;
    bool equal = b == c;
    bool greater = (a + b) > c;

    printf("a is less then b:%d\n", less);
    printf("b is equal to c:%d\n", equal);
    printf("a + b  is greater then c:%d", greater);

    return 0;
}