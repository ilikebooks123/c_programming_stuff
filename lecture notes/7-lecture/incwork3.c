#include <stdio.h>

int main(){

    float a = 7;
    float b = 2;
    float c = 5;

    int c_div = (a*b)/c;
    float a_div = a/(b*c);

    printf("a times b divided by c is:%d\n", c_div);
    printf("a divided by (b times c) is:%.1f", a_div);

    return 0;

}