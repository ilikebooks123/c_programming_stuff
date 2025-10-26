#include <stdio.h>
int compary_array(int arrA[],int arrA_len,int arrB[],int arrB_len){
    int result = 0;
    for (int x = 0; x < arrA_len; x++){
        for (int y = 0; y < arrB_len; y++){
            if (arrA[x] == arrB[y]){
                result = arrA[x];
            }   
        }
    }
    return result;
}
void main(void){
    int arrayA[5] = {3,6,1,2,-4};
    int arrayB[6] = {7,9,-1,2,6,8};
    int arrayA_len = sizeof(arrayA)/sizeof(arrayA[0]);
    int arrayB_len = sizeof(arrayB)/sizeof(arrayB[0]);
    
    int result = compary_array(arrayA, arrayA_len, arrayB, arrayB_len);
    
    printf("The result is %d", result);
}
