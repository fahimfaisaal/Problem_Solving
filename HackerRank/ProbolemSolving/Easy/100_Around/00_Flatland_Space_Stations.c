#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//! NOT SOLVED

int* bubbleSort(int n, int *arr) {
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

bool isFoundStation(int cites, int *spaceStations) {

    for (int i = 0; i < sizeof(spaceStations) / 4; i++) {
        if (cites == spaceStations[i]) return true;
    }

    return false;
}

int flatLandSpaceStation(int n, int m, int *spaceStations) {
    if (n == m) return 0;

    int *cites = malloc(n * 4);
    for (int i = 0; i < n; i++) cites[i] = i;

    int *kilometers = malloc(n * 4);

    int temp = 0;
    int firstStation = spaceStations[0];

    for (int i = firstStation; i < n; i++) {

            if (isFoundStation(cites[i], spaceStations)) {
                kilometers[i] = 0;
                temp = 0;
            } else if (isFoundStation(cites[i + 1], spaceStations)) {
                kilometers[i] = cites[i + 1] - cites[i];
                temp = 0; 
            } else {
                temp++;
                kilometers[i] = temp; 
            }
    }

    for (int i = 0; i < m; i++) {
        printf("\nstations -> %d ", spaceStations[i]);
    }

    int max = kilometers[0];

    for (int i = 0; i < n; i++) {
        if (kilometers[i] > max) max = kilometers[i];
    }

    return max;
}

int main() {
    int n, m;

    while (1) {
        scanf("%d %d", &n, &m);

        if (n >= 1 && n <= 100000 && m <= n && m >= 1) {
            int *spaceStations = malloc(m * 4);

            for (int i = 0; i < m; i++) scanf("%d", &spaceStations[i]);

            bubbleSort(m, spaceStations);

            int finalResult = flatLandSpaceStation(n, m, spaceStations);

            printf("%d\n", finalResult);

            break;
        }
    }

    return 0;
}