#include <stdio.h>
#include <stdlib.h>

int divisibleSumPairs(int n, int k, int* numbers) {
    int evenlyDivisible = 0;

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {
            if ((numbers[i] + numbers[j]) % k == 0) evenlyDivisible++;
        }
    }

    return evenlyDivisible;
}

int main() {

    int n, k;

    while (1) {
        scanf("%d", &n);

        if (n >= 2 && n <= 100) {

            while (1) {
                scanf("%d", &k);

                if (k >= 1 && k <= 100) {

                    int *numbers = calloc(n, 4);

                    for (int i = 0; i < n; i++) {
                        scanf("%d", &numbers[i]);

                        if (numbers[i] < 1 && numbers[i] > 100) {
                            printf("\nYour number %d is out of range\n", numbers[i]);
                            i--;
                        }
                    }

                    int evenlyDivisible = divisibleSumPairs(n, k, numbers);

                    printf("%d\n", evenlyDivisible);

                    break;
                }

                printf("\nYour number %d is out of range\n", k);
            }

            break;
        }
        
        printf("\nYour number %d is out of range\n", n);
    }

    return 0;
}