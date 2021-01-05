#include <stdio.h>

int main() {
    int weight;

    while (1) {
        scanf("%d", &weight);

        if (weight >= 1 && weight <= 100) {
            weight % 2 == 0  && weight > 2 ? printf("YES\n") : printf("NO\n");
            break;
        }
    }

    return 0;
}