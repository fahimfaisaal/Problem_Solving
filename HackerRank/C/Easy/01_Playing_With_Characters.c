#include <stdio.h>

int main() {

    char ch;
    char string[15];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s %[^\n]%*c", string, sen);

    printf("%c\n%s\n%s\n", ch, string, sen);

    return 0;
}