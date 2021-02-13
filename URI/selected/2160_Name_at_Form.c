#include <stdio.h>
#include <stdbool.h>

bool isAcceptable(char *str) {
    for (int i = 0; str[i] != '\0'; i++)
        if (i >= 80) return false;

    return true;
}

int main() {
    char str[501];

    scanf("%[^\n]*c", str);

    if (isAcceptable(str)) printf("YES\n");
    else printf("NO\n");

    return 0;
}