#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void plusMinus(int n, int *arr) {
    float positive = 0,
        negative = 0,
        zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)  positive++;
        else if (arr[i] < 0) negative++;
        else zero++;
    }

    printf("%f\n%f\n%f\n", positive / n, negative / n, zero / n);
}

int main() {

    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    plusMinus(n, arr);
    
    return 0;
}