#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int citesTime[n],
        minTime = 1000000000;
        
    for (int i = 0; i < n; i++) {
        scanf("%d", &citesTime[i]);
        if (minTime > citesTime[i])
            minTime = citesTime[i];
    }

    int position = 0,
        isFound = 0;

    for (int i = 0; i < n; i++) {
        if (minTime == citesTime[i]) {
            position = i;
            isFound++;
        }
    }

    if (isFound > 1) {
        printf("Still Rozdil\n");
    } else printf("%d\n", position + 1);
}