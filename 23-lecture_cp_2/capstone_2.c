#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DEBUG 

int main(){
    printf("Guess a number between 1 and 100.\nYou get 5 attempts to guess the number.\n");
    srand(time(0));
    
    int rnumber = rand() % 100 + 1;
    int attempts;
    int input;
    int play;

    while (attempts < 6){
        #ifdef DEBUG
            printf("DEBUG mode target numeber:%d\n", rnumber);
        #endif 
        
        for (attempts = 1; attempts < 6; attempts++){   
            printf("Pick a number (1-100):");
            
            int letter = scanf("%d", &input);
            
            if (attempts == 5){
                printf("Would you like to play again? (y/n): ");
                
                scanf("%c", &play);
                
                if (play == 121){
                    attempts = 1;
                    rnumber = rand() % 100 + 1;
                }
                else if (play == 110){
                    printf("Thank you for playing!");
                    return 0;
                }
                else{
                    printf("Ending program");
                    return 0;
                }
  
            }
            
            else if (letter != 1){
                attempts--;
                printf("Please enter an integer between 1-100\n");
            }
            

            else if (input == rnumber ){
                printf("Congratulations! you successfully guessed the number in %d attempts.\nWould you like to play again? (y/n):\n", attempts);
                
                scanf("%c", &play);
                
                if (play == 121){
                    attempts = 1;
                    rnumber = rand() % 100 + 1;
                }
                else if (play == 110){
                    printf("Thank you for playing!");
                    return 0;
                }
                else{
                    printf("Ending program");
                    return 0;
                }
            }
            
            else if (input < rnumber ){
                printf("Guess higher\n");
            }
            
            else if (input > rnumber ){
                printf("Guess lower\n");
            }
            
            while (getchar() != '\n');
        }

    }
    
    return 0;

}