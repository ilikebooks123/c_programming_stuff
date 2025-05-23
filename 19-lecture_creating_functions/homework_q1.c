#include <stdio.h>

float mean(float x, float y);

int main(){
    float average = mean(2, 2);
    
    printf("%f", average);

    return 0;
}

float mean(float x, float y){
    return (x + y)/2;
}