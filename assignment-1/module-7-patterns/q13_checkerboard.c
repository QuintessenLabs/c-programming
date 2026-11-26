#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            putchar((i + j) % 2 == 0 ? 'X' : 'O');
        }
        putchar('\n');
    }
    return 0;
}
