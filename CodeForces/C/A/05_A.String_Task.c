#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_vowel(char character) {
    char vowels[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};

    for (int i = 0; i < 6; i++) {
       if (toupper(character) == vowels[i])
           return true;
    }

    return false;
}

int main() {

    char word[100];

    scanf("%[^\n]%*c", word);

    int length = strlen(word);

    if (length > 0 && length <= 100) {

        for (int i = 0; i < length; i++) {
            if (is_vowel(word[i])) continue;
            else printf(".%c", tolower(word[i]));    
        }

        printf("\n");
    }

    return 0;
}