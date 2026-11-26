#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    int a[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        long long sum = 0;
        for (int j = 0; j < c; j++) sum += a[i][j];
        printf("%lld", sum);
        if (i + 1 < r) putchar(' ');
    }
    putchar('\n');

    for (int j = 0; j < c; j++) {
        long long sum = 0;
        for (int i = 0; i < r; i++) sum += a[i][j];
        printf("%lld", sum);
        if (j + 1 < c) putchar(' ');
    }
    putchar('\n');
    return 0;
}
