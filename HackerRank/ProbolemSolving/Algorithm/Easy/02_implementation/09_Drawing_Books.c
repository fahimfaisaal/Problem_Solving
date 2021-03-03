#include <stdio.h>

int pageCounter(int n, int p) {
    if (p == 1 || p == n) return 0;

    int fromFirstCount = 0;
    for (int i = 2; i <= p; i++) {
        if (i % 2 != 0) continue;
        fromFirstCount++;
    }

    int fromLastCount = 0;
    for (int i = n - 1; i >= p; i--) {
        if (i % 2 == 0) continue;
        fromLastCount++;
    }

    if (fromLastCount > fromFirstCount) return fromFirstCount;
    else return fromLastCount;
}

int main() {
    int totalPage,
        turnPage;
    
    scanf("%d %d", &totalPage, &turnPage);

    int pageCount = pageCounter(totalPage, turnPage);

    printf("%d\n", pageCount);
}