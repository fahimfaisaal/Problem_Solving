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

char* funnyString(char* s) {
    int len = strlen(s);
    int *deference = calloc(len - 1, sizeof(int));
    
    for (int i = len - 1, j = 0; i > 0; i--, j++) {
        int c1 = s[i], c2 = s[i - 1];
        int def = c2 > c1 ? c2 - c1 : c1 - c2;
        
        deference[j] = def;
    }
    
    int matchCounter = 0;
    
    for (int i = 0; i < len - 1; i++) {
        int c1 = s[i], c2 = s[i + 1];
        int def = c2 > c1 ? c2 - c1 : c1 - c2;
        
        if (deference[i] == def) matchCounter++;
    }
    
    if (matchCounter == len - 1) return "Funny";
    
    return "Not Funny";
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* q_endptr;
    char* q_str = readline();
    int q = strtol(q_str, &q_endptr, 10);

    if (q_endptr == q_str || *q_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int q_itr = 0; q_itr < q; q_itr++) {
        char* s = readline();

        char* result = funnyString(s);

        fprintf(fptr, "%s\n", result);
    }

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
