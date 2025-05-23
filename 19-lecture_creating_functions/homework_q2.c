#include <stdio.h>

int max_of_three(int a, int b, int c){
    int max = a;

    if (max < b){
        max = b;
    }

    if (max < c){
        max = c;
    }
    
    return max;  
}

int main(){
    int max_num = 0;
    
    max_num = max_of_three(10, 20, 40);

    printf("%d", max_num);

    return 0;
}