#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reduceStr(char *string, int len) {
    char *reduce = calloc(26, sizeof(char));

    for (int i = 0, j = 0; i < len; i++) {
        if (string[i] == ' ') continue;
        reduce[j++] = string[i];

        for (int k = i + 1; k < len; k++) {
            if (string[i] == string[k])
                string[k] = ' ';
        }
    }

    return reduce;
}

char *alternateStr(char letterOne, char letterTwo, char *string, int len) {
    char *alternate = calloc(1000, sizeof(char));

    for (int i = 0, j = 0; i < len; i++) {
        if (string[i] == letterOne || string[i] == letterTwo)
            alternate[j++] = string[i];
    }

    return alternate;
}

int alternate(char *string, int len, char *reduceStr, int reduceLen) {
    int *numberOfAlter = calloc(1000, sizeof(int)),
        length = 0;

    for (int i = 0; i < reduceLen - 1; i++) {
        for (int j = i + 1; j < reduceLen; j++) {
            char *alter = alternateStr(reduceStr[i], reduceStr[j], string, len);
            int lenOfAlter = strlen(alter), k;

            for (k = 0; k < lenOfAlter - 1; k++)
                if (alter[k] == alter[k + 1]) break;

            if (lenOfAlter - 1 == k) 
                numberOfAlter[length++] = lenOfAlter;
        }
    }

    int max = numberOfAlter[0];
    for (int i = 0; i < length; i++)
        if (max < numberOfAlter[i]) max = numberOfAlter[i];
    
    return max;
}

int main() {
    int len;
    scanf("%d", &len);

    char *str = calloc(len + 1, sizeof(char));
    scanf("%s", str);

    char *strClone = calloc(len, sizeof(char));
    for (int i = 0; i < len; i++) strClone[i] = str[i];

    char *reduce = reduceStr(strClone, len);
    int reduceLen = strlen(reduce);

    int result = alternate(str, len, reduce, reduceLen);

    printf("%d\n", result);

    return 0;
}