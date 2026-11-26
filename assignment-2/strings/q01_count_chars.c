#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (ch == ' ') {
            spaces++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (isalpha(ch)) {
            char lc = (char)tolower(ch);
            if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
