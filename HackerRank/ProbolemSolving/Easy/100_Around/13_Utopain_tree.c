#include <stdio.h>
#include <stdlib.h>

int generateHeight(int t) {

    int height = 0;
    
    for (int j = 0; j <= t; j++) {
        if (j % 2 != 0 && j > 2) {
           height *= 2;
        } else height++;
    }   

    return height;
}

int main() {

    int n;

    scanf("%d", &n);

    int *period = calloc(n, 4);

    for (int i = 0; i < n; i++) scanf("%d", &period[i]);
    
    for (int i = 0; i < n; i++) {
        int height = generateHeight(period[i]);
        printf("%d\n", height);
    }

    return 0;
}