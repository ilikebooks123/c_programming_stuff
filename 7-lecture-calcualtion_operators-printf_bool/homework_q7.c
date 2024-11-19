//i think printf("x=%d, a=%d, b=%d, c=%d\n", x, a, b, c) will print out x=13 a=10, b=12, c=120 
//
#include <stdio.h>

int main(void){

    int x = 10;//stating the value
    int a, b, c;//stating variables
    a = x++;//x = 11 a =10
    b = ++x;//b = 12 x = 12
    c = 10*x++;//x = 13 c = 120
    printf("x=%d a=%d b=%d c=%d", x, a, b, c);

    return 0;


}