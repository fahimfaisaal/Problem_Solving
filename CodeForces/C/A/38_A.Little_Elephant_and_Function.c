#include <stdio.h>

void function(int n, int start) {
    if (start == n) return;

    printf("%d ", start);

    function(n, start + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d ", n);
    function(n, 1);

    printf("\n");

    return 0;
}