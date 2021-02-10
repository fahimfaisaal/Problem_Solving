#include <stdio.h>
#include <string.h>

int main() {
    int count = 1;
    char word[100];

    scanf("%d", &count);

    if (count >= 1 && count <= 100) while(count--) {
        scanf("%s", &word);
        int length = strlen(word);

        if (length > 10) printf("%c%d%c\n", word[0], length - 2, word[length - 1]);        
        else printf("%s\n", word);
    }

    return 0;
}