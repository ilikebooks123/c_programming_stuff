#include <stdio.h>

void printTri(int size, char character) {
    int n;
    
    
    for (n = 0; n < size ; n++){
        printf("*\n");
    }
    
}

int main(void){
    int triangleSize = 5;
    char fillCharacter = '*';
    
    printTri(triangleSize, fillCharacter);
    
    return 0;
}