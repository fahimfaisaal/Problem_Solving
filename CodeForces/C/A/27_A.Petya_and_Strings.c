#include <stdio.h>
#include <string.h>
#include <ctype.h>

int petyaStrings(char *str1, char *str2) {
    int len = strlen(str1);

    for (int i = 0; i < len; i++) {        
        if (tolower(str1[i]) > tolower(str2[i])) 
            return 1;
        
        if (tolower(str1[i]) < tolower(str2[i]))
            return -1;
    }

    return 0;
}

int main() {
    char str1[101],
        str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    int result = petyaStrings(str1, str2);

    printf("%d\n", result);

    return 0;
}