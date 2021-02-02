#include <stdio.h>
#include <stdlib.h>

int *breakingRecords(int n, int *scores) {
    int heights = scores[0],
        lowest = scores[0],
        heightsCounter = 0,
        lowestCounter = 0;

    int *counters = malloc(2 * 4);

    for (int i = 1; i < n; i++) {
        if (scores[i] > heights) {
            heights = scores[i];
            heightsCounter++;
        }

        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestCounter++;
        }
    }

    counters[0] = heightsCounter;
    counters[1] = lowestCounter;

    return counters;
}

int main() {

    int n;
    scanf("%d", &n);

    int *scores = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &scores[i]);

    int *breakingRecord = malloc(2 * 4);

    breakingRecord = breakingRecords(n, scores);

    printf("%d %d\n", breakingRecord[0], breakingRecord[1]);

    return 0;
}