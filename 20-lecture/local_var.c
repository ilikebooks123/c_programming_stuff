#include <stdio.h>

void myFunction(){
    int localvar = 10;//local variable
    printf("Value of local variable: %d\n", localvar);
}

int localvar = 5;

int main(){
    myFunction();
    printf("%d", localvar);// Error: Cannont access local var here
    
    return 0;


}