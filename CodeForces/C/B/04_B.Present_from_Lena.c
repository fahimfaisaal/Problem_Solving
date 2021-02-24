#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int spaces = n * 2,
        step = 2,
        num = 1;

    for (int i = 0; i < n * 2 + 1; i++) {
        if (!spaces) step = -2;

        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }

        int digitStep = 1;
        for (int j = 0, d = 0; j < num; j++, d += digitStep) {
            if (j == ceil(num / 2)) digitStep = -1;
            
            if (j == num - 1) printf("%d\n", d);
            else printf("%d ", d);
        }

        num += step;
        spaces -= step;
    }

    return 0;
}