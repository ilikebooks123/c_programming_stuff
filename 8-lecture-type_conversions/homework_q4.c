#include <stdio.h>

int main(){

    char a = 'E';//69
    int b = 30;
    float c = 5.5;
    float result = a*b - c/2;//69*30= 2070 - 5.5/2= 2070 - 2.75= 2067.25

    printf("a*b - c/2 is:%f", result);

    return 0;

}