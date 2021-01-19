#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* twoStrings(char* s1, char* s2) {    
    int strOneLen = strlen(s1);
    int strTwoLen = strlen(s2);
    int k = 0;
    
    for (int i = 0; i < strOneLen; i++) {
        for (int j = i; j < strTwoLen; j++) {
            if (s1[i] == s2[j]) return "YES";
        }
    }
    
    return "NO";
}

int main() {

    char str1[10000];
    char str2[10000];

    int n;
    scanf("%d", &n);

    while(n--) {
        scanf("%s %s", str1, str2);

        char *result = twoStrings(str1, str2);
        printf("%s\n", result);
    }

    return 0;
}