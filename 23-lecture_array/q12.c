#include <stdio.h>
int indexOfSmallest(int arr[],int size, int index){
    int smallest = 0;
    int var = 0;
    for(int x = index; x < size; x++){
        for (int y = 0; y < size; y++){
            if (arr[x] < arr[y]){
                smallest = x;
            } 
        }
    }
    return smallest;
}

void main(void){
    int data[] = {4,-1,3,8,7,2,9};

    int arrayLength =sizeof(data)/sizeof(data[0]);
    int result = indexOfSmallest(data, arrayLength, 2);
    printf("The smallest index is: %d", result);
}

