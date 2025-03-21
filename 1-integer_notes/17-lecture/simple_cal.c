#include <stdio.h>

int main(){
    char op;
    float num1;
    float num2;
    float re;

    printf("enter the first number:");
    scanf("%f", &num1);
    printf("Enter the operator (+ - * /):");
    scanf(" %c", &op);
    printf("Enter the second number:");
    scanf("%f", &num2);
    
    switch (op){
    case '*':
        re = num1*num2;
        break;
    case '+':
        re = num1 + num2;
        break;
    case '-':
        re = num1 - num2;
        break;
    case '/':
        if (num2 == 0){
            printf("Error Divsion by zero");
        }
        
        else{
            re = num1/num2;
        }

        break;
        
    default:
        printf("please in put one of the following: +, -, *, /");
        return 0;
        break;
    }

    printf("%f", re);

}