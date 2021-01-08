#include <stdio.h>
#include <stdlib.h>

//! NOT SOLVED
int birthday(int n, int day, int month, int *chocolate) {

    int segment = 0;

    for (int i = 0; i < n - 1; i++) {
        int sum = 0;
        
        for (int j = i; j < n; j++) {

        }

        if (sum == day) {
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