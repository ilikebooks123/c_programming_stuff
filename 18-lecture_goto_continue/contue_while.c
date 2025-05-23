#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        i++;
        continue; // Skip the rest of the loop body
        printf("%d\n", i); // This will never execute
    }
    printf("Loop ended.\n");
    return 0;
}
