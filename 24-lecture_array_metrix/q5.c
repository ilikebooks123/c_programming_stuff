#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    
    int rows = 0;
    int cols = 0;
    
    printf("number of rows and cols:");
    scanf("%d %d", &rows, &cols);
    printf("%d %d", rows, cols);
    
    double target[rows][cols];
    double source[rows][cols];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            source[i][j] = ((double)rand()) / ((double)RAND_MAX) * 5;
        }
        
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            target[i][j] = source[i][j];
        } 
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%lf ", source[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%lf ", target[i][j]);
        }
        printf("\n");
    }
    
    

}