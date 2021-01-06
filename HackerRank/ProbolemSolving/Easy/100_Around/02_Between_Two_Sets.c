#include <stdio.h>
#include <stdlib.h>

//! NOT SOLVED

int getTotalX(int n, int m, int *a, int *b) {
    int X = 0;

    for (int i = 0; i < m; i++) {

        int temp = 0;

        for (int j = 0; j < n; j++) {

            if (b[i] % a[j] == 0)  temp++;
        }
        
        if (temp == n) X++;
    }

    return X;
}

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    if (m >= 1 && m <= 10 && m >= 1 && m <= 10) {
        int *a = malloc(n * 4);
        int *b = malloc(m * 4);
        int totalLength = m + n;

        for (int i = 0; i < totalLength; i++) {    
            if (i < totalLength - m) scanf("%d", &a[i]);
            else scanf("%d", &b[i - n]);
        }

        int finalResult = getTotalX(n, m, a, b);

        printf("%d\n", finalResult);
    }

    return 0;
}