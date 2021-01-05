#include <stdio.h>
#include <stdlib.h>

int simpleArraySum(int ar_count, int* ar) {

    int sum = 0;

    for (int i = 0; i < ar_count; i++) {
        scanf("%d", &ar[i]);
        
        if (ar[i] <= 1000) {
            sum += ar[i];
        } else
            i--;
    }

    return sum;
}

int main() {

    int n;

    scanf("%d", &n);

    if (n > 0) {
        int* arr = malloc(n * sizeof(int));

        int final_result = simpleArraySum(n, arr);

        printf("%d\n", final_result);
    }
    return 0;
}