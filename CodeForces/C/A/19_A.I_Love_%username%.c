#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int scores[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    int maxScore = scores[0],
        minScore = scores[0],
        amazing = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > maxScore) {
            amazing++;
            maxScore = scores[i];
        } else if (scores[i] < minScore) {
            amazing++;
            minScore = scores[i];
        }
    }

    printf("%d\n", amazing);
}