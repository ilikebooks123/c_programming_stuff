#include <stdio.h>

int main(){
    int months;
    int year;
    int isleap = 0;

    printf("Enter month (1-12):");
    scanf("%d", &months);
    printf("Enter year:");
    scanf("%d", &year);

    if ((year%4) == 0 && (year%100) != 0){
        isleap = 1;
    }
    
    switch (months){
        case 1:
            printf("January %d has 31 days", year);
            break;
        case 2:
            if (isleap){
                printf("Febuary %d has 29 days", year);
            }
            else{
                printf("Febuary %d has 28 days", year);
            }
            
            break;
        case 3:
            printf("March %d has 31 days", year);
            break;
        case 4:
            printf("April %d has 30 days", year);
            break;
        case 5:
            printf("May %d has 31 days", year);
            break;
        case 6:
            printf("June %d has 30 days", year);
            break;
        case 7:
            printf("July %d has 31 days", year);
            break;
        case 8:
            printf("August %d has 31 days", year);
            break;
        case 9:
            printf("September %d has 30 days", year);
            break;
        case 10:
            printf("October %d has 31 days", year);
            break;
        case 11:
            printf("November %d has 30 days", year);
            break;
        case 12:
            printf("December %d has 31 days", year);
            break;

    }


}