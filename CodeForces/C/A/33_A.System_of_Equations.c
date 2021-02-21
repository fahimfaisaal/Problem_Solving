#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int equationCount = 0;
    for (int a = 0; a < 32; a++) {
        for (int b = 0; b < 32; b++) {
            if (pow(a, 2) + b == n && a + pow(b, 2) == m)
                equationCount++;
        }
    }

    printf("%d\n", equationCount);

    return 0;
}