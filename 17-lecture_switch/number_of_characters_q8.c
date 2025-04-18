#include <stdio.h>

int main(){
    char input;

    printf("Please enter text (end with #):");
    
    scanf("%c", &input);
    
    while (getchar() != '#'){
        input = getchar();
        printf("%c", input);
    }
    
    


}