#include <stdio.h>

int callme(void) {
    static int call_times = 0;
    return ++call_times;// returning plus one to call_times/the variable
}

int main(void) {
    int i, calling = 0;
    
    for (i = 0; i < 5; i++) {//calling becomes 3 as callme is plus one to the variable and the for code will run 3 times due to 2 i++ 
        calling = callme();
        i++;
    }
    
    printf("The function has been called %d times\n", calling);
    return 0;
}