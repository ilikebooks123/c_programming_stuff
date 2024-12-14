#include <stdio.h>

int main(){
    int ch;

    printf("Please enter a charater: ");
    ch = getchar(); //Reads a single character from user input

    if (ch != EOF){
        printf("You have entered: %c\n", ch);
    } else {
        printf("No character entered or an error occurred.\n");

    }

    return 0;
}