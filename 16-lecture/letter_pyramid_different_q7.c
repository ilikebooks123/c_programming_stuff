#include <stdio.h>

int main(){
    int line;
    int i,j;
    char ch;

    scanf("%c", &ch);

    line = ch - 'A' + 1;

    for ( i = 1; i <= line; i++){

    for (j = 1; j <= line - i; j++){
        printf(" ");
    }

    //print ascending numbers
    for (j = 0; j < i; j++){
        printf("%c", 'A' + j);
    }

    //print desending letters
    for (j -= 2; j >= 0; j--){
        printf("%c", 'A' + j);
    }
    
    printf("\n");

    }

    return 0;
}
    
