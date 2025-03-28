#include <stdio.h>

int main(){
    char letter;
    char print1 = 65;
    char print2 = 66;
    char space = 32;
    char A = 65;
    int number_of_spaces;
    
    scanf("%c", &letter);
    
    number_of_spaces = letter - 65;
    
    for (int i = 65; i <= letter; i++){
        if (print1 == 65){
            for (int j = 0; j == number_of_spaces; j++){
                number_of_spaces = letter - 65;
                printf(" ");
            }
            number_of_spaces--;
        }
        
        if (i == 65){
            printf("%c", print1);
        }
        printf("");

    }
    
    return 0;
}