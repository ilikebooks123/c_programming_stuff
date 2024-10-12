#include <stdio.h>

int main(){
    int i;
    short s;
    unsigned short uns;
    long l;
    unsigned long unl;
    long long ll;
    unsigned long long unll;


    printf("size of int: %zu bytes\n", sizeof(i));
    printf("size of short: %zu bytes\n", sizeof(s));
    printf("size of unsigned short: %zu bytes\n", sizeof(uns));
    printf("size of long: %zu bytes\n", sizeof(l));
    printf("size of unsigned long: %zu bytes\n", sizeof(unl));
    printf("size of long long: %zu bytes\n", sizeof(ll));
    printf("size of unsigned long long: %zu", sizeof(unll));

    return 0;
}