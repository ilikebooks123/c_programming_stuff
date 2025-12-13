#include <stdio.h>

int main(){
    char arr[] = "abcdef";
    int n = 0;
    int size = 0;
    
    while (arr[n] != '\0'){
        size += sizeof(arr[n]);
        n++;
    }
    
    while (size >= 0){
        printf("%c", arr[size]);
        size--;
    }
    
    return 0;
}