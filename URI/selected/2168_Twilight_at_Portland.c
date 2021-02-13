#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n += 1;
    int numbers[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &numbers[i][j]);

    int safeCounter;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            safeCounter = 0;

            numbers[i][j] == 1 && safeCounter++;
            numbers[i + 1][j] == 1 && safeCounter++;
            numbers[i][j + 1] == 1 && safeCounter++;
            numbers[i + 1][j + 1] == 1 && safeCounter++;

            if (safeCounter < 2) printf("U");
            else printf("S");
        }

        printf("\n");
    }

    return 0;
}