#include <stdio.h>

int main(){
    int number = 3;

    if(number > 5) {
        printf("this number is greater than 5.\n");
    } else if(number == 5){
        printf("this number is equal to 5.\n");
    } else {
        printf("this number is less than 5.\n");
    }

    return 0;

}