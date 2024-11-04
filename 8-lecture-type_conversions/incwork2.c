#include <stdio.h>

int main(){
//Declare a variable 's' of type short and assign it the value 300
short s = 300;
//the short 's' is promoted to an int
int i = s;

//output: the value of short s is: 300
printf("the value of the short s is: %hd\n", s);
//out put: the value of int i is : 300
printf("the value of int i is:%d\n", i);

    return 0;

}