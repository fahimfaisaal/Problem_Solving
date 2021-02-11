#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drinksMl = k * l;

    int enoughToasts = drinksMl / nl,
        min = enoughToasts;

    int enoughLimes = c * d;
    if (min > enoughLimes) min = enoughLimes;

    int enoughSalt = p / np;
    if (min > enoughSalt) min = enoughSalt;

    printf("%d\n", min / n);

    return 0;
}