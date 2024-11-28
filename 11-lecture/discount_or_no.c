#include <stdio.h>

int main(){
    int money;
    char yes;
    char no;
    char y_n;
    
    printf("Enter money spent:");
    scanf("%d", &money);
    
    printf("Are you a member?(yes/no):");
    scanf("%f",&y_n);                                                                                                                                                                                                               
    
    if(y_n==yes){
        if(500<=money){
        printf("Discount:20%%");}
        
        else if(200<=money && money<500){
        printf("Discount:10%%");
        }
        
        else if(money<200){
        printf("Discount:5%%");
        }
    }
    
    if(y_n==no){
        if(500<=money){
        printf("Discount:10%%");
        }
    
        else if(money<500){
        printf("Discount:0%%");
        }  
    }
    
    return 0;
}