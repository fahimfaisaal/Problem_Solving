#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool allFound(char *str, int len) {
    for (int i = 0; i < len; i++)
        if (str[i] != '0') return false;

    return true;
}

char *amusingJoke(char *guest, char *host, char *letters) {
    int guestLen = strlen(guest),
        hostLen = strlen(host),
        lettersLen = strlen(letters), isFound;

    for (int i = 0; i < lettersLen; i++) {
        isFound = 0;

        for (int j = 0; j < guestLen; j++) {
            if (guest[j] == '0') continue;

            if (letters[i] == guest[j]) {
                isFound = 1;
                guest[j] = '0';
                break;
            }
        }

       if (!isFound) for (int k = 0; k < hostLen; k++) {
            if (host[k] == '0') continue;

            if (letters[i] == host[k]) {
                isFound = 1;
                host[k] = '0';
                break;
            }
        }

        if (!isFound)
            return "NO";
    }

    if (allFound(guest, guestLen) && allFound(host, hostLen)) 
        return "YES";

    return "NO";
}

int main() {
    char guestName[101],
        residenceHostName[101],
        letters[101];

    scanf("%s", guestName);
    scanf("%s", residenceHostName);
    scanf("%s", letters);

    char *result = amusingJoke(guestName, residenceHostName, letters);

    printf("%s\n", result);
}