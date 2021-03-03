#include <stdio.h>
#include <stdlib.h>

int *icecreamParlor(int money, int length, int *prices, int *result_count) {
    *result_count = 2;

    int *result = malloc(*result_count * sizeof(int));

    for (int i = 0; i < length - 1; i++) {
        int match = 0;

        for (int j = i + 1; j < length; j++) {
            int sum = 0;
            
            sum = prices[i] + prices[j];

            if (sum == money) {
                result[0] = i + 1;
                result[1] = j + 1;
                match = 1;
                break;
            }
        }

        if (match) break;
    }

    return result;
}

int main() {
    int n;

    scanf("%d", &n);

    while (n--) {
        int length,
            money,
            result_count;

        scanf("%d %d", &money, &length);

        int *price = malloc(length * sizeof(int));

        for (int i = 0; i < length; i++) scanf("%d", &price[i]);

        int *result = icecreamParlor(money, length, price, &result_count);

        printf("%d %d\n", result[0], result[1]);
    }

    return 0;
}