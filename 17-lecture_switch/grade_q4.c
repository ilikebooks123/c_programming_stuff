#include <stdio.h>

int main(){
    char grade;
    int score;
    
    printf("Enter score (0-100):");
    scanf("%d", &score);

    if (score >= 90 && score <= 100){
        grade = 'A';
    }

    else if (score >= 80 && score <= 89){
        grade = 'B';
    }
    
    else if (score >= 70 && score <= 79){
        grade = 'C';
    }
    
    else if (score >= 60 && score <= 69){
        grade = 'D';
    }
    
    else if (score >= 0 && score <= 59){
        grade = 'E';
    }

    switch (grade){
    case 'A':
        printf("Grade: A");
        break;
    case 'B':
        printf("Grade: B");
        break;
    case 'C':
        printf("Grade: C");
        break;
    case 'D':
        printf("Grade: D");
        break;
    case 'E':
        printf("Grade: E");
        break;
    default:
        printf("Enter a score(0-100)");
    }

}