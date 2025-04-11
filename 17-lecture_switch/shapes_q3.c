#include <stdio.h>

int main(){
    int shape;
    float multi;
    float multi2;
    float area;
   
    printf("Please select an option:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Exit\n");
    scanf("%d", &shape);

    if (shape == 1){
        printf("Enter radius:\n");
        scanf("%f", &multi);
        area = multi*multi*3.14159;
        printf("The area of the circle is:%f\n", area);
    }
    
    else if (shape == 2){
        printf("Enter sides:\n");
        scanf("%f %f", &multi, &multi2);
        area = multi2*multi;
        printf("The area of the rectangle is:%f\n", area);
        
    }

    else if (shape == 3){
        printf("Enter base and height:\n");
        scanf("%f %f", &multi2, &multi);
        area = multi2*multi/2;
        printf("The area of the triangle is:%f", area);

    }

    else if (shape == 4){
        printf("Thank you for using the program");
        return 0;
    }
    
    
    



}