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
        int rowMin = a[i][0];
        for (int j = 1; j < c; j++) {
            if (a[i][j] < rowMin) rowMin = a[i][j];
        }
        for (int j = 0; j < c; j++) {
            if (a[i][j] == rowMin) {
                int colMax = a[0][j];
                for (int k = 1; k < r; k++) {
                    if (a[k][j] > colMax) colMax = a[k][j];
                }
                if (a[i][j] == colMax) {
                    printf("%d %d %d\n", i, j, a[i][j]);
                    return 0;
                }
            }
        }
    }
    printf("None\n");
    return 0;
}
