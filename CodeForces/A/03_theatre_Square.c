#include <stdio.h>

int main() {
//! Not Solved
    long int n, m, a;

    scanf("%li%li%li", &n, &m, &a);

    (n && m && a) >= 1 && (n && m && a) <= 1000000000 && printf("%li\n", (n * a) / m);

    return 0;
}