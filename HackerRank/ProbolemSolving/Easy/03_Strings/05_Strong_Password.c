#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
int isUpperCase(int n, char *s);
int isLowerCase(int n, char *s);
int isDigit(int n, char *s);
int isSpecialChar(int n, char *s);
int minimumNumber(int n, char *password);

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* password = readline();

    int answer = minimumNumber(n, password);

    fprintf(fptr, "%d\n", answer);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

int isUpperCase(int n, char *s) {

    for (int i = 0; i < n; i++) {
        int charCode = s[i];

        for (int j = 0, k = 65; j < 26; j++, k++) {        
            if (charCode == k) return 1;
        }
    }

    return 0;
}

int isLowerCase(int n, char *s) {

    for (int i = 0; i < n; i++) {
        int charCode = s[i];

        for (int j = 0, k = 97; j < 26; j++, k++) {        
            if (charCode == k) return 1;
        }
    }

    return 0;
}

int isDigit(int n, char *s) {

    for (int i = 0; i < n; i++) {
        int charCode = s[i];

        for (int j = 0, k = 48; j < 10; j++, k++) {        
            if (charCode == k) return 1;
        }
    }

    return 0;
}

int isSpecialChar(int n, char *s) {

    char specialChar[12] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 12; j++) if (specialChar[j] == s[i]) return 1;
    }

    return 0;
}

int minimumNumber(int n, char* password) {
    int strong = 0,
        len = 6;

    if (isLowerCase(n, password)) strong = strong;
    else strong++;

    if (isUpperCase(n, password)) strong = strong;
    else strong++;

    if (isSpecialChar(n, password)) strong = strong;
    else strong++;

    if (isDigit(n, password)) strong = strong;
    else strong++;

    if (n < len) {
        if (n + strong >= len) strong = strong;
        else {
            if (strong > 0) strong = 4 - strong;
            strong = n + strong && strong < 3 >= len ? strong : len - n;
        }
    }

    return strong;
}