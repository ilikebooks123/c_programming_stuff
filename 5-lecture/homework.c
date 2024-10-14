#include <stdio.h>

int main(){
    
double d = 3.14159265358979323846;
printf("double with 2 decimal points is equal to: %.2lf\n", d);
printf("double with 5 decimal points is equal to: %.5lf\n", d);
printf("double with 10 decimal points is equal to: %.10lf\n", d);

    return 0;
}