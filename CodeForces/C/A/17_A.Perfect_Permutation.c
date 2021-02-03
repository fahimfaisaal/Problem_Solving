#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) printf("%d ", i + 1);
            else printf("%d ", i - 1);
        }
    else printf("-1");

    printf("\n");

    return 0;
}