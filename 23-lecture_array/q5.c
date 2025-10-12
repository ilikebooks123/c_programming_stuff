#include <stdio.h>

int main(){
    int temp1 = 0;
    int temp2 = 0;
    int var = 5;
    int arr[6] = {10, 20, 30, 40, 50, 60};
    for (int i = 0; i < 2; i++){
        temp1 = arr[i];
        temp2 = arr[var];
        arr[i] = temp2;
        arr[var] = temp1;
        var--;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    return 0;
}