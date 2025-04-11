#include <stdio.h>
int main(){
    int n = 1;
    int m = 2;
    
    switch (n){
        case 1: m++;//incemeants m to 3
        case 2: n++;//incemeants n to 2
        case 3://nothing
            switch(n){
                case 1: n++;//n is equal to 2 so nothing happens
                case 2: m++;n++;//incemeants n to 3 and m to 4
                break;
            }
        case 4:
            m++;//incemeants m to 5
            break;
        default:
            break;
    }
    printf("m = %d, n = %d \n", m, n);//will print out "m = 5, n = 3"
    return 0;
}