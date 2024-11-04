#include <stdio.h>

int main(){

    double d = 3.99;
    int num = (int)d; //dataloss

    printf("*num: %d\n", num); //'num' is 3, the fractional part is truncated

    return 0;

}