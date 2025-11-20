#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    int length = strlen(password);
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    char special[] = "!@#$%";

    for (int i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
        if (strchr(special, password[i]))
            hasSpecial = 1;
    }

    if (length >= 8 && hasUpper && hasDigit && hasSpecial)
        printf("Password is strong.\n");
    else
        printf("Password is weak.\n");
}
