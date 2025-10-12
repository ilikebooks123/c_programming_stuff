#include <stdio.h>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        printf("Please enter element %d: ", i + 1);//Promt user input
        scanf("%d", &arr[i]);                    //read element into array
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}