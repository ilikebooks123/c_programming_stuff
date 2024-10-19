#include <stdio.h>

int main(){
    char a = 'A';
    char b = '1';
    int result = a + b;

    char letter = 'A';
    signed char s_char = -100;
    unsigned char us_char = 200;
    //print charater
    printf("chracter: %c\n", letter);

    //print signed char interger value
    printf("Signed char char_s value: %d\n", s_char);

    //print unsigned char integer value
    printf("Unsigned char us_char value: %u\n", us_char);

    //print charater and its ASCII value
    printf("charater '%c' had ASCII value: %d\n ", letter ,letter);

    return 0;
}