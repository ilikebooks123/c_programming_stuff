#include <stdio.h>

int main(){
    int n;
    char password[] = "";

    printf("Please enter a password:");
    scanf("%c", &password);
    while (getchar() != '\n');
    
    printf("Confirm (Y/N):");
    char confirm = scanf("%c");
    while (getchar() != '\n');
    printf("%c", password);
    
    if (confirm == 'y' || confirm == 'Y'){
        printf("your password is:");
        for (int i = 0; password[i] != '\0'; i++){
            printf("%c", password[i]);
        }
    }
    else{
        printf("Failed");
    }
    
    
    return 0;
}