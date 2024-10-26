#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isTure = true;
    bool isFalse = false;

    bool customBool = -42;

    printf("bool isTrue equal to:%d\n", isTure);
    printf("bool isFalse equal to:%d\n", isFalse);
    printf("bool customBool equal to:%d", customBool);

    return 0;
}