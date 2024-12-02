#include <stdio.h>

int main(){
    float money;
    char y_n;
    
    printf("Enter money spent:");
    scanf("%f", &money);
    
    printf("Are you a member?(y/n):");
    scanf(" %c",&y_n);                                                                                                                                                                                                               


    if(y_n=='y'){
        if(500<=money){ 
            float discount20 = 0.2;
            printf("money before discount:%f\n", money);
            float discounted_total20 = money*(1.0-discount20);
            printf("Discount:20%%\n");
            printf("Discounted total is:%f", discounted_total20);
        }
        
        else if(200<=money && money<500){
            float discount10 = .1;
            printf("money before discount:%f\n", money);
            float discount_total10 = money*(1.0-discount10);
            printf("Discount:10%%\n");
            printf("Discounted total is:%f", discount_total10);
        }
        
        else if(money<200){
            float discount5 = 0.05;
            printf("money before discount:%f\n", money);
            float discounted_total5 = money*(1.0-discount5);
            printf("Discount:5%%\n");
            printf("Discounted total is:%f", discounted_total5);
        }
    }
    
    if(y_n=='n'){
        if(500<=money){
            float nmdiscount10 = 0.1;
            printf("money before discount:%f\n", money);
            float nmdiscounted10_total = money*(1.0-nmdiscount10);
            printf("Discount:10%%\n");
            printf("Discounted total is:%f", nmdiscounted10_total);
        }
    
        else if(money<500){
            float nmdiscount;
            printf("money before discount:%f\n", money);
            printf("Discount:0%%\n");
            printf("money after discount:%f", money);
        }  
    }
    
    return 0;
}