#include <stdio.h>

int main(){

    int a;
    int x;
    printf("input a positive integer:");

    int return_value = scanf("%d", &a);
    
    if(return_value<=0){
        printf("Error");
     }

    if (a%2==1){
        printf("you have inputed an odd number");
    }
    
    if (a%2==x+1==1){
        printf("you have inputed an even number");
    }

    

    return 0;


}