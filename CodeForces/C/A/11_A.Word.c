#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isLower(char letter);
int lowerCount(int len, char *str);
char *lower(int len, char *str);
char *upper(int len, char *str);

int main() {
    char word[101];
    scanf("%[^\n]%*c", word);

    int len = strlen(word);
    int lowers = lowerCount(len, word),
        uppers = len - lowers;
    
    if (uppers <= lowers) lower(len, word);
    else upper(len, word);

    printf("%s\n", word);

    return 0;
}

bool isLower(char letter) {
    int charCode = letter;

    for (int i = 1, j = 97; i < 27; i++, j++) 
        if (j == charCode) return true;

    return false;
}

int lowerCount(int len, char* str) {
    int counter = 0;

    for (int i = 0; i < len; i++) 
        if (isLower(str[i])) counter++;

    return counter;
}

char *lower(int len , char* str) {
    for (int i = 0; i < len; i++)
      str[i] = tolower(str[i]);

    return str;
}

char *upper(int len , char* str) {
    for (int i = 0; i < len; i++) 
      str[i] = toupper(str[i]);

    return str;
}