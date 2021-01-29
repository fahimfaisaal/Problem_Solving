#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isDistinct(int y) {
    char year[5];
    sprintf(year, "%d", y);

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (year[j] == year[i]) return false;
        }
    }

    return true;
}

int main() {

    int y;
    scanf("%d", &y);

    for (int i = y + 1; i <= 9012; i++) {
        if (isDistinct(i)) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}