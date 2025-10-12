#include <stdio.h>

int main(){
    int sum = 0;
    int five[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++){
        sum += five[i];
    }
    printf("%d", sum);
    
    return 0;
}