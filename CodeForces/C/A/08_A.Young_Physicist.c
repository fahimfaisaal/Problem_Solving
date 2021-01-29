#include <stdio.h>

char *isEquilibrium(int n) {
    int sumX = 0, sumY = 0, sumZ = 0,
    x, y, z;

    while (n--) {
        scanf("%d %d %d", &x, &y, &z);
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (!sumX && !sumY && !sumZ) return "YES";
    return "NO";
}

int main() {

    int n;
    scanf("%d", &n);

    char *result = isEquilibrium(n);

    printf("%s\n", result);

    return 0;
}