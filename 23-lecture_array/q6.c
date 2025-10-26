#include <stdio.h>

int arrsum(int arr1[], int arr2[], int arr3[], int size);

int main(){
    int arr1[4] = {2, 4, 6, 8};
    int arr2[4] = {1, 0, 3, 6};
    int arr3[4];
    int size_of_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    
    arrsum(arr1,arr2,arr3,size_of_arr1);
    for (int i = 0; i < size_of_arr1; i++){
        printf("%d\n", arr3[i]);
    }
    
}

int arrsum(int arr1[], int arr2[], int arr3[], int size){
    for (int i = 0; i < size; i++){
        arr3[i] = arr1[i] + arr2[i];
    }

}