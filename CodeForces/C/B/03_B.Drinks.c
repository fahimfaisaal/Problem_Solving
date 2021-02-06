#include <stdio.h>

int main() {
    int n, fractionOrange;
    scanf("%d", &n);

    double volumeFraction = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &fractionOrange);

        volumeFraction += ((double)fractionOrange / (double)n);
    }

    printf("%.12lf\n", volumeFraction);
}