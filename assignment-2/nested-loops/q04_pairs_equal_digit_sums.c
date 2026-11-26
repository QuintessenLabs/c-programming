#include <stdio.h>

int digitSum(int x) {
    if (x < 0) x = -x;
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int s1 = digitSum(a[i]);
        for (int j = i + 1; j < n; j++) {
            if (s1 == digitSum(a[j])) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
