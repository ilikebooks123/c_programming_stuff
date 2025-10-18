#include <stdio.h>

int main(){
    int arr1[4] = {2, 4, 6, 8};
    int arr2[4] = {1, 0, 3, 6};
    int arr3[4];
    
    for (int n = 0; n < 4; n++){
        arr3[n] = arr1[n] + arr2[n]; 
        printf("%d\n", arr3[n]); 
    }
    
}