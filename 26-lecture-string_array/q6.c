#include <stdio.h>

int main(){
    char arr[] = "Hello World!";
    int n = 0;
    int x = 0;

    while (arr[n] != '\0'){
        if (arr[n] == 'o'){
        x++;
        }
    n++;
    }
    
    printf("number of o's:%d", x);

}