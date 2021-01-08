#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//! NOT SOLVED

int *bubbleSort(int n, int*arr) {
    int swap;

    for (int i = 0; i < n - 1; i++)       
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = swap;
        }
    }

    return arr;
}

int *getMedian(int start, int end) {

    int length = (end - start) + 1;
    int *startEndArr = calloc(length, 4);

    for (int i = 0, j = start; i < length; i++, j++) startEndArr[i] = j;

    if (length % 2 != 0) {
        int *mid = calloc(1, 4);
        mid[0] = startEndArr[length / 2];
        return mid;
    } else {
        int *mid = calloc(2, 4);
        mid[0] = startEndArr[length / 2] - 1;
        mid[1] = startEndArr[length / 2];
        return mid;
    }
}

int flatLandSpaceStation(int n, int m, int *spaceStations) {
    if (n == m) return 0;

    int *kilometers = malloc(n * 4);
    int *medians = calloc(m , 4);
    int k = 0;

    for (int i = 0; i < m - 1; i++) {
        int startStation = spaceStations[i],
            endStation = spaceStations[i + 1];

        int *median = calloc(2, 4);
        median = getMedian(startStation, endStation);

        for (int j = 0; j < 2; j++) {
            if (median[j] == 0) continue;
            medians[k] =  median[j];
            k++;
        }
    }

    for (int i = 0; i < sizeof(medians); i++) {
        if (i == sizeof(medians) - 1) printf("medians -> %d\n", medians[i]);
        else printf("medians -> %d\n", medians[i]);

    }
    // int max = kilometers[0];

    // for (int i = 0; i < n; i++) {
    //     if (kilometers[i] > max) max = kilometers[i];
    // }

    // return max;
}

int main() {
       int n, m;

    while (1) {
        scanf("%d %d", &n, &m);

        if (n >= 1 && n <= 100000 && m <= n && m >= 1) {
            int *spaceStations = calloc(m, 8);

            for (int i = 0; i < m; i++) scanf("%d", &spaceStations[i]);

            bubbleSort(m, spaceStations);

            int finalResult = flatLandSpaceStation(n, m, spaceStations);

            printf("%d\n", finalResult);

            break;
        }
    }

    return 0;
}
