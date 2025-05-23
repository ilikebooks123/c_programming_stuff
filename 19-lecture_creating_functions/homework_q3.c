#include <stdio.h>

float circle_area(float r,float π){
    return r*r*π;
}

int main(){
    
    float area = circle_area(3, 3.14159);
    
    printf("%d", area);
    
    return 0;

}