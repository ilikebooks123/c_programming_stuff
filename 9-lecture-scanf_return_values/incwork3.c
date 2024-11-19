#include <stdio.h>

int main(){

    int a, b, c;
    printf("enter 3 integer with spaces in between:");
    scanf("%d %d %d", &a, &b, &c);
    int result = a+b+c;
    printf("a + b + c is:%d" ,result);

    return 0;

}