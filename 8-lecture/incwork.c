#include <stdio.h>

int main(){

    int a = 5;
    float b = 2.5;
    //int 'a' is implicitly conver6ted to float
    float result = a + b;//float 'a + b' is converted to float

    printf("a + b result:%f\n", result);

    char c = 'A';//65
    char d = 1;
    int result2 = c + d;//result = 66
    printf("c + d result: %d\n", result2);//output:a + b promote to int

    return 0;

}