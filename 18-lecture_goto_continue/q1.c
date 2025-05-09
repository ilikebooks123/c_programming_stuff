#include <stdio.h>

int main(){
    int limit = 0;

    for ( limit = 0; limit <= 100; limit++){
        if (limit%2 == 0){
            continue;
        }
        printf("%d\n", limit);

    }
    
    return 0;

}