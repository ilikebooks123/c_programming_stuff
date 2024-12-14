#include <stdio.h>
    
int main(){
    char ch;

    printf("Please enter a character:");
    ch = getchar(); // reads a siongle chararcter from user input
    printf("you have entered:");
    putchar(ch); //Outputs the character entered by the user
    putchar('\n');

    return 0;

}