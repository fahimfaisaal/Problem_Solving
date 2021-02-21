#include <stdio.h>

int main() {
    int n, a, b,
        positions = 0;

    scanf("%d %d %d", &n, &a, &b);

    for (int i = 1; i <= n; i++) {
        if (i - 1 >= a && n - i <= b) {
            positions++;
        }
    }

    printf("%d\n", positions);
    return 0;
}