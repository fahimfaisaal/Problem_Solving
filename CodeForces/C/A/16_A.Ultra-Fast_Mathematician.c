#include <stdio.h>
#include <string.h>

int main() {
    char num1[101];
    char num2[101];

    scanf("%s", num1);
    scanf("%s", num2);

    int len = strlen(num1);

    for (int i = 0; i < len; i++) {
        if (num1[i] == num2[i]) printf("0");
        else printf("1");
    }
    printf("\n");

    return 0;
}