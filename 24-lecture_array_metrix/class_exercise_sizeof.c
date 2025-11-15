#include <stdio.h>

int main(){
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    
    printf("%lu\n", sizeof(a));

    int row = sizeof(a)/sizeof(a[0]);
    printf("row:%d\n", row);

    int element = sizeof(a)/sizeof(a);
    printf("element:%lu\n", sizeof(a[0][0]));

    int cols = sizeof(a[0])/sizeof(a[0][0]);
    
    printf("rows:%d\ncolums:%d\n", row, cols);


}