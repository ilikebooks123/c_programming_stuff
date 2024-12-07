#include <stdio.h>

int main(){

int entered;

printf("please enter an integer:");
int return_value = scanf("%d", &entered);

if(return_value == 0){
    printf("Invaild input:please enter an integer");
}

if(return_value == 1){
    printf("You have entered:%d", entered);

}




}