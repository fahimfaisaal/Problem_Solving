#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kaprekarNumbers(int p, int q) {

    int validCounter = 0;

    for (int i = p; i <= q; i++) {
        if (i == 1) {
            printf("%d ", i);
            validCounter++;
        }

        if (i > 8) {
            long double square = (long double)i * (long double)i;

            char *squareStr = calloc(15, sizeof(char));
            sprintf(squareStr, "%Lf", square);    
            int len = strlen(squareStr);
            
            int partition = len / 2;
            int sum = 0;

            char *a = calloc(partition, sizeof(char));
            char *b = calloc(len - partition, sizeof(char));

            for (int j = 0; j < partition; j++) a[j] = squareStr[j];            
            sum = atoi(a);

            for (int k = partition, m = 0; k < len; k++, m++) b[m] = squareStr[k];
            sum += atoi(b);

            if (sum == i) {
                printf("%d ", i);
                validCounter++;
            }
        }
    }

    if (!validCounter) printf("INVALID RANGE\n");
    printf("\n");
}

int main() {

    int p, q;

    scanf("%d %d", &p, &q);

    kaprekarNumbers(p, q);

    return 0;
}