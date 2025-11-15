#include <stdio.h>

int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};

    //accessinjg elements
    printf("%d \n", a[0][0]); //outputs 1
    printf("%d \n", a[1][2]); //outputs 6

    // printing the entire array
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}