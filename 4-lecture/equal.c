#include <stdio.h>

int main(){
    int number1 = 41;
    int number2 = 30;
                                //argument
    printf("number 1 is: %d\n" ,number1);
    printf("number 2 is: %d\n" ,number2);
    //all contents inside of " " is called format string
    //%d is format specifier , it means %d is replaced by the content of number1 which is 41
    printf("number 1 is: %d and number 2 is: %d\n" ,number1 ,number2);

    short number3 = 50;
    printf("number 3 is :%hd\n" ,number3);

    unsigned short f = 500;
    printf("f is:%hu" ,f);
    
    return 0;
}