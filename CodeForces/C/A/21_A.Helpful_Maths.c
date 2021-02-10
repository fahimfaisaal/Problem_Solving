#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);

    int j, temp;

    for (int i = 0; i < len; i++) {
        if (str[i] == '+')
         continue;

        temp = i;
        j = i - 2;

        while (j >= 0 && (int)str[j] > (int)str[temp]) {
            char swap = str[j];
            str[j] = str[temp];
            str[temp] = swap;
    
            j -= 2, temp -= 2;
        }
    }

    printf("%s\n", str);

    return 0;
}