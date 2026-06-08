#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char password[100];

    // Userdan password kiritishni so‘raymiz
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    // Password uzunligini hisoblaymiz
    int length = strlen(password);

    // Belgilar bor-yo‘qligini tekshirish uchun flaglar
    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;
    int hasSpecial = 0;

    // Har bir belgini tekshiramiz
    for(int i = 0; i < length; i++){
        if (isupper(password[i])) hasUpper = 1;      // Katta harf
        else if (islower(password[i])) hasLower = 1; // Kichik harf
        else if (isdigit(password[i])) hasDigit = 1; // Raqam
        else hasSpecial = 1;                          // Maxsus belgi
    }

    // Password kuchini tekshiramiz
    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Strong password\n");
    } else {
        printf("Weak password\n");
    }

    return 0;
}