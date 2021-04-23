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
char** split_string(char*);

int *bubbleSort(int n, int*arr) {
    int swap;

    for (int i = 0; i < n - 1; i++)       
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = swap;
        }
    }
    
    return arr;
}

int* missingNumbers(int arr_count, int* arr, int brr_count, int* brr, int* result_count) {
    int match_count = 0;

    for (int i = 0; i < brr_count; i++) {
        for (int j = 0; j < arr_count; j++) {
            if (brr[i] == arr[j]) {
                brr[i] = 0;
                arr[j] = 0;
                match_count++;
                break;
            }
        }
    }

    *result_count = brr_count - match_count;

    int *missingNumbers = calloc(*result_count, sizeof(int));

    for (int i = 0, j = 0; i < brr_count; i++) {
        if (brr[i] == 0) continue;
        else
            missingNumbers[j++] = brr[i];
    }

    return bubbleSort(*result_count, missingNumbers);
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = n;

    char* m_endptr;
    char* m_str = readline();
    int m = strtol(m_str, &m_endptr, 10);

    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }

    char** brr_temp = split_string(readline());

    int* brr = malloc(m * sizeof(int));

    for (int i = 0; i < m; i++) {
        char* brr_item_endptr;
        char* brr_item_str = *(brr_temp + i);
        int brr_item = strtol(brr_item_str, &brr_item_endptr, 10);

        if (brr_item_endptr == brr_item_str || *brr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(brr + i) = brr_item;
    }

    int brr_count = m;

    int result_count;
    int* result = missingNumbers(arr_count, arr, brr_count, brr, &result_count);

    for (int i = 0; i < result_count; i++) {
        if (result[i] == result[i + 1]) continue;

        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, " ");
        }
    }

    fprintf(fptr, "\n");

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

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!line) {
            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);
    } else {
        data = realloc(data, data_length + 1);

        data[data_length] = '\0';
    }

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
