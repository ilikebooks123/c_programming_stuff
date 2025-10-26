#include <stdio.h>
#include <stdbool.h>

int main(){
    bool boolArray[6] = {1,0,1,1,0,0};
    int t = 0;

    for (int i = 0; i < 6; i++){
        if (boolArray[i] == true){
            printf("%d\n", boolArray[i]);
            t++;
        }
        
    }
    printf("Number of true values: %d", t);

}