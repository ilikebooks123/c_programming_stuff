#include <stdio.h>

int main(){
    int result = putchar('A'); //Output character 'A' and store the return value in result
    
    if(result != EOF){
        printf("\nputchar() successfully output the character: %c\n", result);
    }
    else {
        printf("\nouputchar() failed to output the charater.\n");
    }

    return 0;

}