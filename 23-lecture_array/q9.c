#include <stdio.h>

int main(){
    long numbers[5] = {1000, 2000, 3000, 4000, 1000};
    int x = 0;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for (x = 0; x < size; x++){
        for (int y = x+1; y < size; y++){
            if (numbers[x] == numbers[y]){
                printf("There is a duplicate of %d\n", numbers[x]);
            }
        } 
    
    }
    
}
