#include <stdio.h>

int main(){
     int BMI;
     int average;
     int weight;
     float height;
     
     printf("Enter weight in kilograms:");
     scanf("%d", &weight);
     printf("Enter height in meters:");
     scanf("%f", &height);

     BMI = weight/(height*height);

      if (BMI < 18.5){
           average = 1;}
    
      else if (18.5 <= BMI < 24.9){
           average = 2;}
    
      else if (25 <= BMI < 29.9){
           average = 3;}
    
      else{
           average = 4;}

     switch (average){
          case 1:
               printf("BMI is: %f");
               printf("Underweight");
               break;
          case 2:
               printf("BMI is: %f");
               printf("Normal weight");
               break;
          case 3:
               printf("BMI is: %f");
               printf("Overweight");
               break;
          case 4:
               printf("BMI is: %f\n");
               printf("Obese");
               break;
    }


}