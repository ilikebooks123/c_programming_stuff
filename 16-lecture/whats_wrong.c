#include <stdio.h>

int main(){
    int i = 0;
    int j = 0;
    for (; i < 10; i++){
        for (; j < 5; j++){//for (j = 0; j < 5; j++) always have the j = 0 inside the breakets as it resets the j back to 0 when you dont the for loop wont run again as its already equal to 5
            printf("This is print\n");
        }
        
    }

    return 0;
    
}