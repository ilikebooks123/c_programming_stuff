#include <stdio.h>

int main(){
    int limit = 0;

    for (limit = 0; limit <= 50; limit++){
        if (limit%7 == 0){
            continue;
        }
        printf("%d\n", limit);
    }
    


}