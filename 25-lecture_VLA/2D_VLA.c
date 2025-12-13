#include <stdio.h>

void example(){
    int x = 2;
    int y = 3;
    int b[x][y];

    for (int i = 0; i < x; i++){
        for (int k = 0; k < y; k++){
            b[i][k] = i + k;//assign values to 2D array
            printf("%d ", b[i][k]);
        }
        printf("\n");
    }
    
}

int main(){
    example();
    return 0;

}