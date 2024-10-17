#include <stdio.h>
#include <float.h>
#include <math.h>
    
    int main(){
        float f = 1.23456;
        double d = 1.23456789012345;
        long double ld = 1.2345678901234567;

        printf("float is equal to: %.5f\n" ,f);
        printf("double is equal to: %.14lf\n" ,d);
        printf("long double is equal to: %.16Lf\n" ,ld);

        return 0;
    }