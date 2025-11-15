#include <stdio.h>

int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++){
        for (int x = 0; x < 3; x++){
            printf("%d", a[i][x]);
        }
        printf("\n");
    }
    printf("%d",a[1][2]);

    return 0;
}