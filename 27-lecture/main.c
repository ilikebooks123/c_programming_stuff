#include <stdio.h>
#include "module.h"
#include "module_2.h"

int main(){
    greet();
    int result = multiply(3, 4);
    printf("3 x 4 = %d\n", result);
    return 0;
}