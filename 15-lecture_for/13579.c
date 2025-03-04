#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;
    for (i = 1; i <=3 ; i++){
        printf("outer forloop %d\n", i);
        
       for( j = 1; j <= 2; j++){
        printf("inner forloop %d\n", j);
       }
    }
    
    return 0;

}