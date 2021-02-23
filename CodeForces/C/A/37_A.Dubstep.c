#include <stdio.h>
#include <string.h>

int main() {
    char string[201];
    scanf("%s", string);

    int len = strlen(string);

    for (int i = 1; i < len - 1; i++) {
        if (string[i - 1] == 'W' && string[i] == 'U' && string[i + 1] == 'B') {
            string[i - 1] = '.';
            string[i] = '.';
            string[i + 1] = '.';
        }
    }

    for (int i = 0; i < len; i++) {
        if (string[i] != '.') {
            printf("%c", string[i]);
        }

        if (string[i] != '.' && string[i + 1] == '.') {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}