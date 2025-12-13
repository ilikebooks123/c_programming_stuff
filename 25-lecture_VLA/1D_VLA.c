#include <stdio.h>

void example(){
    int len = 5; //Length is defined by a variable
    int a[len]; // a is a VLA, length is len

    for (int i = 0; i < len; i++){
        a[i]= i * i;//assign values to the array
        printf("%d ", a[i]);
    }
    
}

int main(){
    example();
    return 0;

}