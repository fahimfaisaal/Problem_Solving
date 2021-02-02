#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isLucky(char *numStr) {
    int len = strlen(numStr);
    int luckyCounter = 0;

    for (int i = 0; i < len; i++)
        if (numStr[i] == '7' || numStr[i] == '4')
            luckyCounter++;
    
    if (luckyCounter == 7 || luckyCounter == 4)
        return true;

    return false;
}

int main() {
    char str[25];
    scanf("%s", str);

    if (isLucky(str)) printf("YES\n");
    else printf("NO\n");

    return 0;
}