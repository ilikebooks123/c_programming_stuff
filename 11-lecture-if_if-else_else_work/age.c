#include <stdio.h>// below 18 child, 18-25 teen, 25 above adult

int main(){
    int age;
    printf("enter your age:");
    scanf("%d", &age);

    if(age<18){
        printf("You are a child");
    }

    else if(age>=18 && age<25){
        printf("You are a teen");
    }

    else{
        printf("You are an adult");
    }

    
}