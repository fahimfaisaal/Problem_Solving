#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str),
        counter = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '0') continue;
        counter++;

        for (int j = i + 1; j < len; j++)
            if (str[i] == str[j])
                str[j] = '0';
    }

    if (counter % 2) printf("IGNORE HIM!\n");
    else printf("CHAT WITH HER!\n");

    return 0;
}