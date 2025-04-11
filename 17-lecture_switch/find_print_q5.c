#include <stdio.h>

int main(){
    int date=0;

    printf("Please enter a date (1-7):");
    scanf("%d", &date);

    if (date < 0 || date > 7){
        printf("Invalid date input.\n");
    }
    switch (date){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("weekday\n");
//if input value is 1 it will start at case 1 and go all the way down to here and print "weekday" then stop    
        break;
    case 6:
    case 7:
        printf("weekend\n");
//if input value is 6 it will start at case 6 and go all the way down to here and print "weekend" then stop
        break;
    default:
        printf("please enter 1 to 7");
        break;
    }
    return 0;

}