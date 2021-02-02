#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    char string[n + 1];
    for (int i = 0; i <= n; i++) 
        scanf("%c", &string[i]);

    while (t--) {
        for (int i = 1; i <= n; i++) {
            if (string[i - 1] == 'B' && string[i] == 'G') {
                char temp = string[i - 1];
                string[i - 1] = string[i];
                string[i] = temp;
                i++;
            }
        }
    }

    for (int i = 0; i <= n; i++)
        printf("%c", string[i]);

    return 0;
}
