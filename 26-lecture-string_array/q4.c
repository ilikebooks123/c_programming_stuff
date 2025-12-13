#include <stdio.h>

int main(){
    char arr[] = {'A', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
    int n = 0;
    int size = 0;
    while (arr[n] != '\0'){
        printf("%c", arr[n]);
        size += sizeof(arr[n]);
        n++;
    }
    printf("\n");
    printf("array length:%d", size);
    return 0;
}