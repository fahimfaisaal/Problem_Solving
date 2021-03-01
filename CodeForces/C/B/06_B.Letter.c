#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isMatch(char *h1, char *h2) {
    int h1Len = strlen(h1),
        h2Len = strlen(h2);

    for (int i = 0; i < h2Len; i++) {
        if (h2[i] == ' ') continue;
        bool isFound = false;

        for (int j = 0; j < h1Len; j++) {
            if (h1[j] == h2[i]) {
               h1[j] = '\0';
               isFound = true;
               break;
            }
        }

        if (!isFound) return false;
    }

    return true;
}

int main() {
    char h1[201];
    scanf("%[^\n]%*c", h1);

    char h2[201];
    scanf("%[^\n]%*c", h2);

    if (isMatch(h1, h2)) {
        printf("YES\n");
    } else printf("NO\n");

    return 0;
}