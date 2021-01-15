#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getCharCode(char letter) {

    for (int i = 1, j = 97; i < 27; i++, j++) {
        if (letter == j) return i;
    }

    return 0;
}

int getTotal(char *word, int wordLen) {
    int total = 0;

    for (int i = 0; i < wordLen; i++) {
        int letter = word[i],
            charCode = getCharCode(letter);

        total += charCode;
    }

    return total;
}

int *weightedUniformStrings(char *word, int wordLen, int *length) {
    int k = 1;
    int *result = calloc(10000, sizeof(int));
    result[0] = getTotal(word, wordLen);

    for (int i = 0; i < wordLen; i++) {

        if (word[i] == ' ') continue;

        int charCode = getCharCode(word[i]);
        int sum = charCode;

        result[k] = charCode;
        k++;

        for (int j = i + 1; j < wordLen; j++) {
            if (word[j] == ' ') continue;

            if (word[i] == word[j]) {
                sum += charCode;
                result[k] = sum;
                word[j] = ' ';
                k++;
            } else break;
        }

        result[k++] = sum;
    }

    *length = k;

    return result;
}

int isMatch(int number, int *arr, int len) {

    for (int i = 0; i < len; i++) {
        if (number == arr[i]) return 1;
    }

    return 0;
}

int main() {

    char word[100000];

    scanf("%s", word);
    int len = strlen(word), n;

    int resultLen;
    int *result = weightedUniformStrings(word, len, &resultLen);

    scanf("%d", &n);
    int *stringWeight = malloc(n * 4);

    for (int i = 0; i < n; i++) scanf("%d", &stringWeight[i]);

    for (int i = 0; i < n; i++) {
        if(isMatch(stringWeight[i], result, resultLen)) {
            printf("Yes\n");
        } else printf("No\n");
    }

    return 0;
}