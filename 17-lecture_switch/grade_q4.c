#include <stdio.h>

int main(){
    int grade;
    int score;
    
    printf("Enter score (0-100):");
    scanf("%d", &score);

    grade = score/10;

    switch (grade){
        case 10:
        case 9:
            printf("Grade: A");
            break;
        case 8:
            printf("Grade: B");
            break;
        case 7:
            printf("Grade: C");
            break;
        case 6:
            printf("Grade: D");
            break;
        default:
            printf("Grade: E");
    }
}