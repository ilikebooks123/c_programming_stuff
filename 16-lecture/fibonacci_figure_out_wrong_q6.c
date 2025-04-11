#include <stdio.h>

int main(){
    int count;
    int num0 = 0;
    int num1 = 1;
    
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++){
        
        printf("%d ", num0);
        
        if (num0 = 0){
            printf("%d ", num1);
        }

        int total = num0 + num1;
        num0 += total;
    }

    printf("%d\n", num1);
    printf("%d\n", num0);    


}