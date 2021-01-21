#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* readline();
bool isChar(char letter);
bool isCapital(char letter);
char *rotateAlphabets(int rotate);
int getAlphabetIndex(char letter);

char* caesarCipher(char* s, int k) {
    int len = strlen(s);
    char *rotateLetters = rotateAlphabets(k);
    
    for (int i = 0; i < len; i++) {
        if (!isChar(s[i])) continue;
        
        int getIndexLower = getAlphabetIndex(tolower(s[i]));
        
        if (isCapital(s[i])) {            
            s[i] = toupper(rotateLetters[getIndexLower]);
        } else s[i] = rotateLetters[getIndexLower];
    }
    
    return s;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char* s = readline();

    char* k_endptr;
    char* k_str = readline();
    int k = strtol(k_str, &k_endptr, 10);

    if (k_endptr == k_str || *k_endptr != '\0') { exit(EXIT_FAILURE); }

    char* result = caesarCipher(s, k);

    fprintf(fptr, "%s\n", result);

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

bool isChar(char letter) {
    int letterCode = letter;
    
    for (int i = 0, j = 97; i < 26; i++, j++) {
        if (letterCode == j) return true;
    }
    
    for (int i = 0, j = 65; i < 26; i++, j++) {
        if (letterCode == j) return true;
    }
    
    return false;
}

bool isCapital(char letter) {
    int letterCode = letter;
    
    for (int i = 0, j = 65; i < 26; i++, j++) {
        if (letterCode == j) return true;
    }
    
    return false;
}

char *rotateAlphabets(int rotate) {
    char *alphabets = calloc(26, sizeof(char));
    
    if (rotate > 26) rotate %= 26;

    for (int i = 0, j = 97 + rotate; i < 26 - rotate; i++, j++) alphabets[i] = j;
    for (int i = 26 - rotate, j = 97; i < 26; i++, j++) alphabets[i] = j;
    
    return alphabets;
}

int getAlphabetIndex(char letter) {
    int letterCode = letter;
    
    for (int i = 0, j = 97; i < 26; i++, j++) {
        if (letterCode == j) return i;
    }
    
    return 0;
}