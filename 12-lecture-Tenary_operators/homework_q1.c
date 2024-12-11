#include <stdio.h>

int main(){

    int days;
    int weeks;

    printf("Enter amount of days:");
    
    int return_value = scanf("%d", &days);

    if(days >= 0 && return_value ==! 0){
        int find_weeks = days/7;
        int find_days = days % 7;
        printf("%d days is equal to %d weeks and %d days", days , find_weeks , find_days);
    }
    else if(days < 0){
        printf("Please enter a positive number of days");
    }

    else if(return_value == 0){
        printf("Please enter an integer");
    }


    


    



}