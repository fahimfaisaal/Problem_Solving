#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);

    int problems = 0;

    for (int i = 1; i < n; i++)
        str[i] == str[i - 1] && problems++;
    
    printf("%d\n", problems);
    return 0;
}