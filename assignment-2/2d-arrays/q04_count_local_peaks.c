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

    int peaks = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int ok = 1;
            if (i > 0 && a[i][j] <= a[i - 1][j]) ok = 0;
            if (i + 1 < r && a[i][j] <= a[i + 1][j]) ok = 0;
            if (j > 0 && a[i][j] <= a[i][j - 1]) ok = 0;
            if (j + 1 < c && a[i][j] <= a[i][j + 1]) ok = 0;
            if (ok) peaks++;
        }
    }
    printf("%d\n", peaks);
    return 0;
}
