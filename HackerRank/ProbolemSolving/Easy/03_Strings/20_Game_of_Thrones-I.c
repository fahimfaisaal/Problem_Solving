#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gameOfThrones(char* s) {    
    int len = strlen(s),
        odd = 0,
        even = 0,
        letter;
    
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == '0') continue;
        letter = 1;
        
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                letter++;
                s[j] = '0';
            }
        }

        s[i] = '0';
        
        if (letter % 2) odd++;
        else even++;
    }
    
    if (odd == 2 && !(len % 2)) return "YES";
    if (odd <= 1) return "YES";
    
    return "NO";
}

int main() {
    char *str = calloc(100000, sizeof(char));
    
    scanf("%s", str);
    
    char *result = gameOfThrones(str);
    printf("%s\n", result);

    return 0;
}