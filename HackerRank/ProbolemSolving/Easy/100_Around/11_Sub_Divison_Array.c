#include <stdio.h>
#include <stdlib.h>

int birthday(int n, int day, int month, int *chocolate) {

    int segment = 0;

    for (int i = 0; i < n;) {
        int sum = 0;
        int length = i + month;

        for (int j = i; j < length; j++) sum += chocolate[j];

        if (sum == day) segment++;
        printf("sum = %d\n", sum);

        i = length - 1;
        if (length >= n) break;
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