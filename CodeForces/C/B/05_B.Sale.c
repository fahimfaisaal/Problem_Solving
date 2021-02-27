#include <stdio.h>
#include <stdlib.h>

int campfunc(const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int main() {
    int n, m, sale = 0;
    scanf("%d %d", &n, &m);

    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    qsort(prices, n, 4, campfunc);

    for (int i = 0; i < m; i++) {
        if (prices[i] >= 0) break;

        sale -= prices[i];
    }

    printf("%d\n", sale);

    return 0;
}