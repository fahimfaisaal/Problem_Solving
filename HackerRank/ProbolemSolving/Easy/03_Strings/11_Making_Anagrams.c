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

bool isChar(char letter) {
    int c = letter;
    
    for (int i = 0, j = 97; i < 26; i++, j++) {
        if (c == j) return true;
    }
    
    return false;
}

int makingAnagrams(char* s1, char* s2) {
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    int anagrams = 0;

    for (int i = 0; i < s1Len; i++) {
        for (int j = 0; j < s2Len; j++) {
            if (s2[j] == ' ') continue;
            
            if (s1[i] == s2[j]) {
                s1[i] = ' ';
                s2[j] = ' ';
                break;
            }
        }
        
        if (s1[i] != ' ') anagrams++;      
    }

    
    for (int i = 0; i < s2Len; i++) {
        if (s2[i] != ' ' && isChar(s2[i])) anagrams++;        
    }

    return anagrams;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s1 = readline();

    char* s2 = readline();

    int result = makingAnagrams(s1, s2);

    fprintf(fptr, "%d\n", result);

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