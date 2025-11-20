#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        char c = text[i];
        if (c >= 'A' && c <= 'Z') c = c + 32;

        if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", len);
}
