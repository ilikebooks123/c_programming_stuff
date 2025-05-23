#include<stdio.h>

void receive_signal(int a, int b){
    printf("Received signals are: %d and %d", a, b);
}

int main(){
    receive_signal(10, 20); //calling function
    return 0;
}