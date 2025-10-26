#include <stdio.h>

int main(){
    int sum1 = 0;
    int sum2 = 0;
    int arr[8] = {12, 45, 67, 23, 89, 56, 78};
    int size_of_arr = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size_of_arr; i++){
        sum1 += arr[i];
    }
    sum2 = sum1/size_of_arr; 
    printf("%d", sum2);
    
}