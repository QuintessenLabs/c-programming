#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int best = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            cur++;
            if (cur > best) best = cur;
        } else {
            cur = 1;
        }
    }
    printf("%d\n", best);
    return 0;
}
