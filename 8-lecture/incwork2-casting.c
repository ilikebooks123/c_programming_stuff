#include <stdio.h>

int main(){
    float pi = 3.14159;
    double percise_pi = (double)pi;//explicitly casting to double to ensure no data loss

    printf("opringinal float value of pi: %f\n", pi);
    printf("value after conversion to double, precise_pi: %lf\n",percise_pi);

    return 0;

}