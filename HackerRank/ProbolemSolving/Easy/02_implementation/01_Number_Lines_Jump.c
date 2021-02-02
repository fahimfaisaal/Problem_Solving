#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool inputCondition(int x1, int v1, int x2, int v2) {
    int inputs[4] = {x1, v1, x2, v2},
        trueCounter = 0;

    for (int i = 0; i < 4; i++)
        if (inputs[i] >= 0 && 10000 >= inputs[i]) trueCounter++;

    
    if (trueCounter == 4) return true;
    return false;
}

bool kangaroo(int x1, int v1, int x2, int v2) {

    for (int i = 0; i <= 10000; i++) {
        x1 += v1;
        x2 += v2;

        if (x1 == x2) return true;
    }

    return false;
}

int main() {

    int x1, v1, x2, v2;

    while (1) {
        scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

        if (inputCondition(x1, v1, x2, v2)) {
            if (kangaroo(x1, v1, x2, v2)) {
                printf("YES\n");
            } else printf("NO\n");
            break;
        }
    }

    return 0;
}