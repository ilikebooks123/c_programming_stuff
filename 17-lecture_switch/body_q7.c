#include <stdio.h>

int main(){
    float BMI;
    char average;
    int weight;
    int height;

    printf("Enter weight in kilograms:");
    scanf("%d", &weight);
    printf("Enter height in meters:");
    scanf("%d", &height);

    BMI = weight/(height*height);

    if (BMI < 18.5){
        average = "Underweight";
    }
    else if (18.5 <= BMI < 24.9){
        average = "Normal weight";
    }
    else if (25 <= BMI < 29.9){
        average = "Overweight";
    }
    else{
        average = "Obese";
    }

    switch (average){
    case '':
        printf("BMI is: %d", BMI);
        printf("%d", average);
        break;
    
    default:
        break;
    }


}