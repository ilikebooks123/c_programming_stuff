#include <stdio.h>
#include <string.h>

int main(){
    char arr[] = "hello world";
    for (int i = 0; i < strlen(arr); i++){
        if (arr[i] == ' '){
            arr[i] = arr[i]+32;
        }
        
        arr[i] = arr[i]-32;
        printf("%c", arr[i]);
    }   
    
    return 0;
}