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

char* pangrams(char* s) {    
    char *letters = calloc(26, sizeof(char));
    for (int i = 0, j = 97; i < 26; i++, j++) letters[i] = j;
    
    int *alphabetCode = calloc(strlen(s), sizeof(int));
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        if (s[i] == ' ') continue;
        else alphabetCode[i] = tolower(s[i]);
    }
    
    int countMatch = 0;
    
    for (int i = 0; i < 26; i++)
     for (int j = 0; j < length; j++) {
        if (letters[i] == alphabetCode[j]) {
            countMatch++;
            alphabetCode[j] = 0;
            break;
        }
    }

    if (countMatch == 26) return "pangram";
    else return "not pangram";
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = pangrams(s);

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
