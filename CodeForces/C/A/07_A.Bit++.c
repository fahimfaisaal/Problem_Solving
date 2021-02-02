#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_increment(char *string) {
    if (!strcmp(string, "X++") || !strcmp(string, "++X"))
     return true;

    return false;
}

int main() {
    int x = 0, n;
    char X[4];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", X);

        if (is_increment(X))  x++;
        else  x--;
    }

    printf("%d\n", x);

    return 0;
}