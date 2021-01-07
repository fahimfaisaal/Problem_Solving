#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandles(int n, int *candels, int highestCandle) {
    int numbersOfHighestCandle = 0;

    for (int i = 0; i < n; i++) if (candels[i] == highestCandle) {
        numbersOfHighestCandle++;
    }

    return numbersOfHighestCandle;
}

int main() {

    int n;
    scanf("%d", &n);

    int *candels = calloc(n, 4);
    int highestCandle = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &candels[i]);
        if (candels[i] > highestCandle)
            highestCandle = candels[i];
    }

    int tallestCandels = birthdayCakeCandles(n, candels, highestCandle);

    printf("%d\n", tallestCandels);

    return 0;
}