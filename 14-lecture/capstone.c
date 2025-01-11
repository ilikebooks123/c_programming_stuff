#include <stdio.h>

int main(){

    int onethroughfour; 
    int balance = 0;
    int deposited;
    int withdraw;

    printf("------------------------------------\n");
    printf("      Welcome to the simple bank\n");
    printf("------------------------------------\n");
    printf("Please select an operation:\n1. Check Balance\n2. Deposite\n3. Withdraw\n4. Exit\nEnter your choice(1-4):");
    
    int returnvalue = scanf("%d", &onethroughfour);
    
    while (getchar() != '\n');
    
    if (returnvalue!=1){
        printf("Please enter an integer bewteen 1 and 4\n");
        
        onethroughfour = 0;
    }
    
    if (onethroughfour>4 || onethroughfour<0){
        printf("Please enter an integer between 1 and 4\n");    
    }
    

    while (onethroughfour!=4){

        if (onethroughfour==1){
            printf("Your current balance is:%d\n", balance);
            --onethroughfour;
        }

        else if (onethroughfour==2){
            printf("Enter Deposit amount:\n");
            scanf("%d", &deposited);
            balance = balance + deposited;
            printf("Depost successful!\n");
            printf("Your new balance is:%d\n", balance);
            --onethroughfour;
            --onethroughfour;
        }
        else if (onethroughfour==3){
            printf("enter withdrawal amount:\n");
            scanf("%d", &withdraw);
            
            if (balance<withdraw){
                printf("Insufficient balance. Withdrawal failed.\n");
                --onethroughfour;
                --onethroughfour;
                --onethroughfour;
            }
            
            else{
                balance = balance - withdraw;
                printf("Withdrawal successful!\n");
                printf("Your new balance is:%d\n", balance);
                --onethroughfour;
                --onethroughfour;
                --onethroughfour;
            }
        }
        
        else if (onethroughfour==0){
            printf("\nPlease select an operation:\n1. Check Balance\n2. Deposite\n3. Withdraw\n4. Exit\nEnter your choice(1-4):");
            onethroughfour++;
            int returnvalue = scanf("%d", &onethroughfour);
            
            if (returnvalue!=1){
                printf("Please enter an integer bewteen 1 and 4");
                
                //return 0;
                
                onethroughfour = 0;
            }
        }
        if (onethroughfour>4 || onethroughfour<0){
        printf("Please enter an integer between 1 and 4");
        onethroughfour = 0;   
    }
    
    }

    if(onethroughfour==4){
            printf("Thank you for using the Simple Bank System. Goodbye!");
        }
    
    
}


