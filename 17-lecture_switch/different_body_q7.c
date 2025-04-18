#include <stdio.h>

int main(){
     int BMI;
     char average;
     int weight;
     int height;

     printf("Enter weight in kilograms:");
     scanf("%d", &weight);
     printf("Enter height in meters:");
     scanf("%d", &height);

     BMI = weight/(height*height);



     if (BMI < 18.5){
          average = "Underweight";}
    
     else if (18.5 <= BMI < 24.9){
          average = "Normal weight";}
    
     else if (25 <= BMI < 29.9){
          average = "Overweight";}
    
     else{
          average = "Obese";}

     switch (BMI){
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
               break;
          case 28:
          case 29:
          case 30:
               printf("BMI is: %d", BMI);
               printf("%d", average);
               break;
    
          default:
               break;
    }


}