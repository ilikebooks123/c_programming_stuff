#include <stdio.h>

int main(){

    int num1 = 15;
    int num2 = 30;

    //printf("num1 is:%d\n", num1);
    //printf("num2 is:%d", num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1 after swap is:%d\n", num1);
    printf("num2 after swap is:%d", num2);

    return 0;

}