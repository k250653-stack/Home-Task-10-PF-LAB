#include <stdio.h>
#include <string.h>

int main() {
    char text[200], enc[200], dec[200];
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z')
            enc[i] = ((c - 'a' + 3) % 26) + 'a';
        else if (c >= 'A' && c <= 'Z')
            enc[i] = ((c - 'A' + 3) % 26) + 'A';
        else
            enc[i] = c;
    }
    enc[len] = '\0';

    for (int i = 0; i < len; i++) {
        char c = enc[i];

        if (c >= 'a' && c <= 'z')
            dec[i] = ((c - 'a' - 3 + 26) % 26) + 'a';
        else if (c >= 'A' && c <= 'Z')
            dec[i] = ((c - 'A' - 3 + 26) % 26) + 'A';
        else
            dec[i] = c;
    }
    dec[len] = '\0';

    printf("Encrypted: %s\n", enc);
    printf("Decrypted: %s\n", dec);
}
