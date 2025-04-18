#include <stdio.h>

int main(){
    int hours;
    int wage;
    int salary;
    int multi;

    printf("Enter hours worked:");
    scanf("%d", &hours);
    printf("Enter hourly wage:");
    scanf("%d", &wage);
    
    if (hours <= 40){
        multi = 1;
    }

    else{
        multi = 2;
    }
    
    switch (multi){
        case 1:
            salary = wage*hours;
            break;
        
        case 2:
            salary = wage*hours*1.5;
            break;
        
        default:
            printf("idk what you did");
            break;
    }

    printf("Salary: %d", salary);

    return 0;
}