#include <stdio.h>
#include <string.h>

int main() {
    char s[101],
        t[101];

    scanf("%s", s);
    scanf("%s", t);

    int len = strlen(t),
        fromStart = 0,
        fromEnd = len - 1,
        operation = len / 2;

    while (operation--) {
        char swap = t[fromEnd];
        t[fromEnd] = t[fromStart];
        t[fromStart] = swap;

        fromStart++, fromEnd--;
    }

    !strcmp(s, t) 
        ? printf("YES\n") 
        : printf("NO\n");

    return 0;
}