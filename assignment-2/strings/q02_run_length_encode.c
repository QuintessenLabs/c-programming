#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    if (scanf("%1000s", s) != 1) return 0;

    int len = (int)strlen(s);
    int i = 0;
    while (i < len) {
        char ch = s[i];
        int count = 0;
        while (i < len && s[i] == ch) {
            count++;
            i++;
        }
        printf("%c%d", ch, count);
    }
    putchar('\n');
    return 0;
}
