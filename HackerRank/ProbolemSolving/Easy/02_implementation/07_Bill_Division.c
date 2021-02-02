#include <stdio.h>
#include <stdlib.h>

void bonAppetit(int n, int k, int *bills, int b) {
    int totalBill = 0;

    for (int i = 0; i < n; i++) {
        if (k == i) continue;
        totalBill += bills[i];
    }

    totalBill /= 2;
    totalBill = b - totalBill;

    if (!totalBill) {
        printf("Bon Appetit\n");
    } else printf("%d\n", totalBill);
    
}

int main() {

    int n, k, b;
    scanf("%d %d", &n, &k);

    int *bills = calloc(n, 4);

    for (int i = 0; i < n; i++) {
        scanf("%d", &bills[i]);
    }

    scanf("%d", &b);
    bonAppetit(n, k, bills, b);

    return 0;
}