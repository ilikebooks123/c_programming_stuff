#include <stdio.h>

int main(){
    char input;
    int num_space = 0;
    int num_line = 0;
    int num_char = 0;
    printf("Please enter text (end with #):");
    
    while ((input = getchar()) != '#'){
        switch (input){
            case ' ':
                num_space++;
                break;
            case'\n':
                num_line++;
                break;
            default:
                num_char++;
        }
    }

    printf("Number of space:%d\nNumber of line:%d\nNumber of letters:%d", num_space, num_line, num_char);
    
    return 0;
}