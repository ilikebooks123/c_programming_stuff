#include <stdio.h>

int main(){
    char letter;
    char space = 32;
    char A = 65;
    int number_of_spaces;
    
    scanf("%c", &letter);
    
    number_of_spaces = letter - 65;
    
    if (letter == 65){
        for (int i = 0; i == number_of_spaces; i++){
            number_of_spaces = letter - 65;
            printf(" ");
        }
        
    }

    for (char i = 65; i <= letter; i++){
        printf("%c", i);
        //letter--;
        
    }




}

    

