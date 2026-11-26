#include <stdio.h>

int main() {
    int n, count = 1;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", count++);
            if (j < i) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
