#include <stdio.h>
#include <stdlib.h>

int getMoneySpent(int budget, int kLength, int dLength, int *keyboard, int *drives) {
    int maxAmount = 0;

    for (int i = 0; i < kLength; i++) {
        for (int j = 0; j < dLength; j++) {
            int max = keyboard[i] + drives[j];

            if (max > budget) continue;
            else if (maxAmount < max) maxAmount = max;
        }
    }

     if (!maxAmount) return -1;

    return maxAmount;
}

int main() {
    int budget, keyboardLength, drivesLength;
    scanf("%d %d %d", &budget, &keyboardLength, &drivesLength);

    int *keyboard = calloc(keyboardLength, 4);
    int *drives = calloc(drivesLength, 4);

    for (int i = 0; i < keyboardLength; i++) scanf("%d", &keyboard[i]);
    for (int j = 0; j < drivesLength; j++) scanf("%d", &drives[j]);

    int expensive = getMoneySpent(budget, keyboardLength, drivesLength, keyboard, drives);

    printf("%d\n", expensive);
}