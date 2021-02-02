#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isLower(char letter) {
    int charCode = letter;

    for (int i = 0, j = 97; i < 26; i++, j++)
        if (charCode == j)
            return true;

    return false;
}

int main() {
    char word[1000];
    scanf("%s", word);
    int len = strlen(word);

    if (len != 0) {
        if (isLower(word[0])) word[0] = toupper(word[0]);
        printf("%s\n", word);
    }

    return 0;
}