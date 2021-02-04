#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int *widths = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &widths[i]);

    int cases[t][2];
    for (int i = 0; i < t; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &cases[i][j]);

    for (int i = 0; i < t; i++) {
        int min = widths[cases[i][0]];

        for (int j = cases[i][0]; j <= cases[i][1]; j++)
            if (min > widths[j]) min = widths[j];

        printf("%d\n", min);
    }

    return 0;
}