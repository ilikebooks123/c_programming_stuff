#include <stdio.h>

int main(){
    int var = 5;
    int arr[6] = {10, 20, 30, 40, 50, 60};
    for (int i = 0; i < 6; i++){
        arr[var] = arr[i];
        var--;
    }
    printf("%d\n %d\n %d\n %d\n %d\n %d\n",arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    return 0;
}