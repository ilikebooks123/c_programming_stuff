#include <stdio.h>

int main(){
    int six[6];
    int min = six[0];
    int max = six[1];
    for (int i = 0; i < 6; i++){
        scanf("%d", &six[i]);
    }

    for (int i = 0; i < 6; i++){
        if (max < six[i]){
            max = six[i];
        }
        
    }
    
    for (int i = 0; i < 6; i++){
        if (min > six[i]){
            min = six[i];
        }   
    }
    printf("max = %d\nmin = %d\n", max, min);
    
    
}