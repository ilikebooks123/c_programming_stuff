#include <stdio.h>

int main(){
    
    char m = 'M';
    char a = 5;
    //make sure you are not using character m/'m' or value will change 77->109
    int adding = m + a;
    
    printf("m+a is equal to: %d " ,adding);

    return 0;
}