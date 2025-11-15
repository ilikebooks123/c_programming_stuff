#include <stdio.h>

int main(){
    int a[2][3] = {{1,2,3}, {4,5,6}};

    //modifying elements
    a[0][1] = 10; //change the second elemnt in the first row
    a[1][2] = 20; //change the third element in the second row

    //assigning values directly
    a[0][0] = 100; //change the first element in the first row

    return 0;
}