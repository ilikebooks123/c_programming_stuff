#include <stdio.h>

int main(){
    char s3[] = {"Alex"};
    char s4[] = "Alex";
    char s5[] = {'A', 'l', 'e', 'x', '\0'};

    printf("%ld \n", sizeof(s3)/sizeof(s3[0]));
    printf("%ld \n", sizeof(s4)/sizeof(s4[0]));
    printf("%ld \n", sizeof(s5)/sizeof(s5[0]));

    return 0;
}