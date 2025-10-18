#include <stdio.h>

int main(){
    int sum1 = 0;
    int sum2 = 0;
    int arr[8] = {12, 45, 67, 23, 89, 56, 78};
    
    for (int i = 0; i < 8; i++){
        sum1 += arr[i];
    }
    sum2 = sum1/8; 
    printf("%d", sum2);
    
}