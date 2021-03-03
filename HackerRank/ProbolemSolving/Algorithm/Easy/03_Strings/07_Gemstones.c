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

int gemstones(int arr_count, char** arr) {
    int gems = 0;

    char *commonLetters = calloc(1000, sizeof(char));    
    int lenOfCommon = 0;
    
    int strLenOfFirst = strlen(arr[0]);
    int strLenOfSecond = strlen(arr[1]);
          
    for (int i = 0, k = 0; i < strLenOfFirst; i++) {
        for (int j = 0; j < strLenOfSecond; j++) {

            if (arr[0][i] == arr[1][j]) {                
                int isInCommon = 0;

                for (int m = 0; m < lenOfCommon; m++) {
                    if (arr[0][i] == commonLetters[m]) {
                        isInCommon = 1;
                        break;
                    }
                }
                
                if (isInCommon) break;
                
                lenOfCommon++;
                commonLetters[k] = arr[0][i];
                k++;

                break;
            }
        }
    }
    
    
    for (int i = 2; i < arr_count; i++) {
        for (int j = 0; j < lenOfCommon; j++) {
            int isMatch = 0;
            
            int len = strlen(arr[i]);
            
            for (int k = 0; k < len; k++) {
                if (commonLetters[j] == arr[i][k]) {
                    isMatch = 1;
                }
            }
            
            if (!isMatch) commonLetters[j] = '\0';
        }
    }
    
    for (int i = 0; i < lenOfCommon; i++) {
        if (commonLetters[i] == '\0') continue;
        gems++;
    }
    
    return gems;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr = malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        char* arr_item = readline();

        *(arr + i) = arr_item;
    }

    int arr_count = n;

    int result = gemstones(arr_count, arr);

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
