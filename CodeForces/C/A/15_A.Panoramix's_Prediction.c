#include <stdio.h>
#include <stdbool.h>

int isPrime(int number) {
    for (int i = 2; i < number; i++)
        if (number % i == 0) return false;
    
    return true;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int nextPrime,
        i = n + 1;

    while (1) {
        if (isPrime(i)) {
            nextPrime = i;
            break;
        }

        i++;
    }

    if (nextPrime != m) printf("NO\n");
    else printf("YES\n");

    return 0;
}