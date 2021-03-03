#include <stdio.h>
#include <stdlib.h>

long aVeryBigSum(int ar_count, long *ar) {
    int i = 0;

    while (i < ar_count)
     scanf("%ld", &ar[i++]);    

    long sum = 0;
    
    for (int i = 0; i < ar_count; i++) sum += ar[i];

    return sum;    
}

int main() {
    int n;
    scanf("%d", &n);

    long* ar = malloc(n * sizeof(long));
    long bigSum = aVeryBigSum(n, ar);

    printf("%ld\n", bigSum);

    return 0;
}