#include <stdio.h>

int main() {
//! Didn't solve with c
    int count = 1;
    char word[] = "internationalization";

    scanf("%d", &count);

    if (count >= 1 && count <= 100) while(count--) {
        scanf("%s", &word);
        int length = sizeof(word) - 1;

        if (length > 10) printf("%c%d%c\n", word[0], length - 2, word[length - 1]);        
        else printf("%s\n", word);
    }

    return 0;
}

/* 
* Solved it with python

count = int(input())

if (count >= 1 and count <= 100):
    while (count):
        word = input()
        length = len(word)
        
        if (length > 10): print(word[0] + str(length - 2) + word[length - 1])
        else: print(word)

        count -= 1
*/