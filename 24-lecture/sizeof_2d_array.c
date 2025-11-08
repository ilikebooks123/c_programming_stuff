#include <stdio.h>

int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    //total size of 2d array
    printf("Total size of 2D array: %lu bytes\n", sizeof(arr));
    
    // size of one row
    printf("Size of one row: %lu bytes\n", sizeof(arr[0]));

    //size of single element
    printf("Size of single element: %lu bytes\n", sizeof(arr[0][0]));

    //number of rows and colums
    int num_rows = sizeof(arr)/sizeof(arr[0]);
    int num_cols = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("number of rows: %d\n", num_rows);
    printf("number of colums: %d\n", num_cols);

    //total number of elements
    int total_elemnts = num_rows * num_cols;
    printf("Total number of elements: %d\n", total_elemnts);

    return 0;
}