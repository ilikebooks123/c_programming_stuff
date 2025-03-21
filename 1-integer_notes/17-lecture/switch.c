#include <stdio.h>
int main(){
    int day = 2;
    switch (day){
    case 1:
        printf("Monday\n");
        //break;
    case 2:
        printf("Tuesday\n");
        //break;
    case 3:
        printf("Wensday\n");
        //break;
    default:
        printf("Invalid day\n");
    }
    return 0;

}