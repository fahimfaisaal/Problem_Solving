#include <stdio.h>

int main() {

    char string[201];
    scanf("%s", string);
    char result[1000];

    int i = 0, j = 0;
    while (string[i]) {
        if (string[i] == '.') {
            result[j] = '0';
        } else if (string[i] == '-' && string[i + 1] == '.') {
            result[j] = '1';
            i++;
        } else if (string[i] == '-' && string[i + 1] == '-') {
            result[j] = '2';
            i++;
        }
        
        j++; i++;
    }

    for (int i = 0; i < j; i++) printf("%c", result[i]);

    return 0;
}