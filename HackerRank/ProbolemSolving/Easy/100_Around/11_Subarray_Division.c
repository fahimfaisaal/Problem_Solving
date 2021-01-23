#include <stdio.h>
#include <stdlib.h>

int birthday(int n, int day, int month, int *chocolate) {
    int *sum = calloc(1000, sizeof(int));
    int segment = 0;

    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + chocolate[i];
    }

    for (int i = 0; i <= n - month; i++) {
        if (sum[i + month] - sum[i] == day) {
            segment++;
        }
    }

    return segment;
}

int main() {

    int n, day, month;
    scanf("%d", &n);

    int *chocolate = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i ++) {
        scanf("%d", &chocolate[i]);
    }

    scanf("%d %d", &day, &month);

    int segments = birthday(n, day, month, chocolate);

    printf("%d\n", segments);

    return 0;
}