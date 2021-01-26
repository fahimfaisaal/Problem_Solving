#include <stdio.h>
#include <stdlib.h>

int* compareTriplets(int *alice, int *bob) {
    int* result = malloc(2 * 4);

    for (int i = 0; i < 2; i++) result[i] = 0;

    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) result[0]++;
        else if (alice[i] < bob[i]) result[1]++;
    }

    return result;
}

int main() {

    int *alice = malloc(3 * 4);
    int *bob = malloc(3 * 4);

    for (int i = 0; i < 6; i++) {
        if (i < 3) scanf("%d", &alice[i]);
        else scanf("%d", &bob[i - 3]);
    }

    int *finalResult = malloc(2 * 4);
    finalResult = compareTriplets(alice, bob);

    printf("%i %i\n", finalResult[0], finalResult[1]);

    return 0;
}