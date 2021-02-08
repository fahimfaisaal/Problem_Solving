#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    int dragons[d + 1];

    for (int i = 1; i <= d; i++) {
        if (i >= k) {
            if (i % k == 0)
                dragons[i] = -1;
        }

        if (i >= l) {
            if (i % l == 0)
                dragons[i] = -1;
        }

        if (i >= m) {
            if (i % m == 0)
                dragons[i] = -1;
        }

        if (i >= n) {
            if (i % n == 0)
                dragons[i] = -1;
        }
    }

    int damageDragons = 0;
    for (int i = 1; i <= d; i++)
        dragons[i] == -1 && damageDragons++;

    printf("%d\n", damageDragons);

    return 0;
}