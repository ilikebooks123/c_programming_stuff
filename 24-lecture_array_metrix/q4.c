#include <stdio.h>

void switch_arr(int a[3][3], int b[3][3]){
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 3; k++){
            b[i][k] = a[i][k];
        } 
    }
    
}

int main(){
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int b[3][3];
    switch_arr(a, b);
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 3; k++){
            printf("%d ", b[i][k]);
        }
        printf("\n");
    }
    
    return 0;
}