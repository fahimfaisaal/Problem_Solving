#include <stdio.h>
#include <stdlib.h>

int campfunc(const void *a, const void *b) {
  return *(int*)b - *(int*)a;
}

int binarySearch(int *arr, int left, int right, int el) {
    if (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == el) {
            return mid;
        }

        if (arr[mid] > el) {
            return binarySearch(arr, mid + 1, right, el);
        }

        return binarySearch(arr, left, mid - 1, el);
    }

    return -1;
}

int climbingLeaderboard(int n, int *ranked, int *ranks, int score) {
    ranked[n] = score;
    qsort(ranked, n + 1, sizeof(int), campfunc);

    int playerRank, ranksIndex;

    ranksIndex = binarySearch(ranked, 0, n, score);

    if (ranked[ranksIndex] == ranked[ranksIndex - 1]) {
        playerRank = ranks[ranksIndex - 1];
    }
    else playerRank = ranks[ranksIndex - 1] + 1;

    return playerRank;
}

int main() {
    int n;
    scanf("%d", &n);

    int *ranked = calloc(n + 1, sizeof(int)),
        *ranks = calloc(n, sizeof(int));
    
    for (int i = 0, j = 0; i < n; i++) {
        scanf("%d", &ranked[i]);

        if (ranked[i] != ranked[i - 1]) ranks[i] = ++j;
        else ranks[i] = j;
    }

    int m, score;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &score);
        printf("%d\n", climbingLeaderboard(n, ranked, ranks, score));
    }

    return 0;
}