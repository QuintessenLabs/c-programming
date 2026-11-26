#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int mid = (n + 1) / 2;
    for (int i = 1; i <= mid; i++) {
        for (int j = 0; j < i; j++) putchar('*');
        for (int j = 0; j < 2 * (mid - i) + 1; j++) putchar(' ');
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) putchar('*');
        for (int j = 0; j < 2 * (mid - i) + 1; j++) putchar(' ');
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
