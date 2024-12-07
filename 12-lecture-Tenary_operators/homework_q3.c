#include <stdio.h>
int main(){
    int age = 60;
    
    printf("first %d\n",age);//print out first 60
    
    if(age = 61){//wont do anything because age is not equal to 61
        printf("second %d\n",age);
        printf("third %d\n",age);
    }
}