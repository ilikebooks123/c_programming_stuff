#include <stdio.h>

int main(){
    char ch;
    int num;

    printf("Enter a character: ");
    ch = getchar(); //reads a single character

    //clear buffer ot remove all remaining character including newline
    while (getchar() != '\n'); //continue reading until we find a new line

    printf("Enter a number: ");
    scanf("%d", &num); //reads in integer

    printf("You entered character: %c\n", ch);
    printf("you have entered number: %d\n", num);

    return 0;


}