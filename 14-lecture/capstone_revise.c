#include <stdio.h>
#include <stdbool.h>

int main(){

    bool run = true;
    int choice;
    int return_value;

    while (run){
        printf("enter 1 2 3 or 4\n");
        return_value = scanf ("%d", &choice);
        
        if (return_value!=1){
            printf("return_value is not equal to 1\n");
        }
        
        else if(choice == 1){
            printf("choice one successful\n");
        }

        else if (choice == 2 ){
            printf("choice two successful\n");
        }
        
        else if (choice == 3){
            printf("choice three successful\n");
        }

        else if (choice == 4){
            printf("choice 4 successful\n");
            run = false;
        }

        else{
            printf("variale not between 1 thorugh 4\n");
        }
        
        while (getchar() != '\n');
        
    }
    
    return 0;

}