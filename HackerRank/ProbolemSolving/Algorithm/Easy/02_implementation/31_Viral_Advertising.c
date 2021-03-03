#include <stdio.h>
#include <stdlib.h>

int viralAdvertising(int n) {
    int shared = 5,
        result = 2;

    if (n > 1) for (int i = 2; i <= n; i++) {
        shared = (shared / 2) * 3;
        result += shared / 2;
    }
    
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = viralAdvertising(n);

    printf("%d\n", result);
    return 0;
}