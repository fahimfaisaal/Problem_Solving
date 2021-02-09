#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int *arr) {
    long *sumArr = malloc(5 * 8),
         min, max;

    for (int i = 0, except = 0; i < 5; i++, except++) {
        long sum = 0;

        for (int j = 0; j < 5; j++) {            
            if (j == except) continue;
            sum += arr[j];
        }

        sumArr[i] = sum;
    }

    min = sumArr[0];
    max = sumArr[0];
    for (int i = 1; i < 5; i++) {
        if (min > sumArr[i]) min = sumArr[i];
        if (max < sumArr[i]) max = sumArr[i];
    }

    printf("%ld %ld\n", min, max);
}

int main() {
    int *arr = malloc(5 * 4);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 1000000000 || arr[i] < 1) i--;
    }

    miniMaxSum(arr);

    return 0;
}