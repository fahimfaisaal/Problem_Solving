#include <stdio.h>
#include <stdlib.h>
//! Not Solved

int main() {
    int n;
    scanf("%d", &n);

    int *numbers = calloc(n, 4);

    for (int i = 0; i < n; i++) scanf("%d", numbers[i]);

    return 0;
}