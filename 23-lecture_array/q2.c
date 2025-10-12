#include <stdio.h>

int main(){
    int grades[5] = {85, 90, 78, 92, 88};

    //printf("My final grade is %d %d %d %d %d this semester.", grades[0], grades[1], grades[2], grades[3], grades[4]);
    printf("My final grade is");
    for (int i = 0; i < 5; i++){
        printf("%d ", grades[i]);
    }
    printf("this semester");
    
}