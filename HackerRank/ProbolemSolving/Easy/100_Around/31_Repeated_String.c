#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//* Not 100% solved

long long int repeatedString(char* s, long long int n) {
    float lenStr = strlen(s);

    float match = 0;
    for (int i = 0; i < lenStr; i++) if ('a' == s[i]) match++;

    long double cal = round((match * n) / lenStr);
    long long int matchCount = cal;

    return matchCount;
}

int main() {
    char str[150];
    long long int n;

    scanf("%s", str);
    scanf("%lld", &n);

    long long int result = repeatedString(str, n);

    printf("%lld\n", result);
    return 0;
}