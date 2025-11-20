#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    char *at = strchr(email, '@');

    if (at == NULL || strlen(at + 1) == 0)
        printf("Domain: Invalid email\n");
    else
        printf("Domain: %s\n", at + 1);
}
