#include <stdio.h>

void modifyArray(int arr[], int size);

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    modifyArray(numbers, 5);
    for (int i = 0; i < 5; i++){
        printf("arr[%d] = %d\n", i, numbers[i]);
    }
    
    return 0;
}

void modifyArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}