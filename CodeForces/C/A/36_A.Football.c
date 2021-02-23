#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    scanf("%s", string);

    int len = strlen(string),
        isSeven = 0,
        danger = 0;

    for (int i = 1; i < len; i++) {
        if (string[i] == string[i - 1]) {
            isSeven++;
        } else isSeven = 0;

        if (isSeven == 6) {
            printf("YES\n");
            danger = 1;
            break;
        }
    }

    !danger && printf("NO\n");
    
    return 0;
}