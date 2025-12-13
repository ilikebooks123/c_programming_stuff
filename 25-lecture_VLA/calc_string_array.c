#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "abcd";

    printf("%ld\n", sizeof(arr)/sizeof(arr[0]));
    printf("%ld", strlen(arr));

}