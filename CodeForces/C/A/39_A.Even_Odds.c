#include <stdio.h>

long long int evenOdd(long long int n, long long int k) {
    n % 2 && n++;
    long long int mid = n / 2;

    if (k > mid) {
        return n - (n - k) * 2;
    } 
    
    return n - 1 - (mid - k) * 2;
}

int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    long long int result = evenOdd(n, k);
    printf("%lld\n", result);

    return 0;
}