#include <stdio.h>

int main(){
    int sum1 = 0;
    int sum2 = 0;
    int arr[7] = {-2, 5, -1, 6, -4, -8, 6};
    for (int i = 0; i < 3; i++){
        sum1 = arr[i] + arr[i+1] + arr[i+2];
        if (sum1 > sum2){
            sum2 = sum1;
        }
        
    }
    printf("%d", sum2);

    return 0;
}