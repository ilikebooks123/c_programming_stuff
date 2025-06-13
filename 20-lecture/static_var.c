#include <stdio.h>

void count(){
    static int num1 = 0; // static local variable
    int num2 = 0;
    num1++;
    num2++;
    printf("num1 = %d, num2 = %d\n", num1 , num2);
}

int main(){
    count(); // OUPUT: num1 = 1, num2 = 1
    count(); // OUPUT: num1 = 1, num2 = 1
    count(); // OUPUT: num1 = 1, num2 = 1
    return 0;
}