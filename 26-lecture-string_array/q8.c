#include <stdio.h>

int main(){
    char confirm;
    char password[] = "";

    printf("Please enter a password:");
    scanf("%c", &password);
    while (getchar() != '\n');
    
    printf("Confirm (Y/N):");
    scanf("%c", &confirm);
    while (getchar() != '\n');
    printf("%d", password);
    
    if (confirm == 'y' || confirm == 'Y'){
        while (getchar() != '\n');
        printf("Confirmed\n");
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