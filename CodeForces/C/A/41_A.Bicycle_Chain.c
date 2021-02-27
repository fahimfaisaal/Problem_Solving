#include <stdio.h>

int main() {
    int n, m, gear = 0, max = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!(b[i] % a[j])) {
                int f = b[i] / a[j];

                if (f > max) {
                    max = f;
                    gear = 1;
                } else if (f == max) {
                    gear++;
                } else break;
            }
        }
    }

    printf("%d\n", gear);

    return 0;
}