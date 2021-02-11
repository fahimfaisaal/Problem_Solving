#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool HQ9(char letter) {
    char hq9Letters[4] = "HQ9";

    for (int i = 0; i < 3; i++)
        if (letter == hq9Letters[i])
         return true;

    return false;
}

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str),
        isFound = 0;

    for (int i = 0; i < len; i++)
        if (HQ9(str[i])) {
            printf("YES\n");
            isFound = 1;
            break;
        }

    if (!isFound) printf("NO\n");

    return 0;
}