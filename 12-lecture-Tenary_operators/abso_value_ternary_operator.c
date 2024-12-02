#include <stdio.h>

int main(){
    int absolute_value=0;
    printf("Enter a value:");
    scanf("%d", &absolute_value);

    absolute_value = (absolute_value >= 0) ? absolute_value : -absolute_value;
    
    printf("absolute value of entered variable is:%d", absolute_value);

    return 0;

}