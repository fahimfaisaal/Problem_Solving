#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    scanf("%s", string);

    int len = strlen(string);

    char *hello = "hello";
    int match = 0;

    for (int i = 0, j = 0; i < len; i++) {
        if (string[i] == hello[j]) {
            match++, j++;
        }

        if (match == 5) break;
    }

    if (match == 5) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}