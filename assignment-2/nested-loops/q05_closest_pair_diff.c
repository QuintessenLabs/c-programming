#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long minDiff = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long d = a[i] - a[j];
            if (d < 0) d = -d;
            if (d < minDiff) minDiff = d;
        }
    }
    printf("%lld\n", minDiff);
    return 0;
}
