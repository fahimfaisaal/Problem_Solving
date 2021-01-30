#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        scanf("%d%d", &m, &n);
        
        if (n >= 1 && n <= 16 && m <= 16 && m >= 1) {
            printf("%d\n", (m * n) / 2);
            break;
        }
    }

    return 0;
}