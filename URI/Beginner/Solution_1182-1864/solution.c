#include <stdio.h>
#include <string.h>

int get_result(char *x, char *y) {
    if (!strcmp(x, y)) return 2;
    else if (!strcmp(x, "tesoura")) {
        if (!strcmp(y, "papel") || !strcmp(y, "lagarto")) return 1;
    } else if (!strcmp(x, "papel")) {
        if (!strcmp(y, "pedra") || !strcmp(y, "Spock")) return 1;
    } else if (!strcmp(x, "pedra")) {
        if (!strcmp(y, "lagarto") || !strcmp(y, "tesoura")) return 1;
    } else if (!strcmp(x, "lagarto")) {
        if (!strcmp(y, "Spock") || !strcmp(y, "papel")) return 1;
    } else if (!strcmp(x, "Spock")) {
         if (!strcmp(y, "tesoura") || !strcmp(y, "pedra")) return 1;
    }

    return 0;
}

void main() {
//* Problem 1182 - Column in Array
    // float array[12][12], sum = 0;
    // int column;
    // char sum_of_average;

    // scanf("%u %c", &column, &sum_of_average);

    // if (column >= 0 && column <= 11) {

    //     for (int i = 0; i < 12; i++) {
    //         for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    //     }

    //     for (int k = 0; k < 12; k++) sum += array[k][column];
        
    //     sum_of_average == 'S' && printf("%.1f\n", sum);
    //     sum_of_average == 'M' && printf("%.1f\n", sum / 12.00);
    // }

//* Problem 1183 - Above the Main Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = k + 1; l < 12; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M' && printf("%.1f\n", sum / average_count);

//* Problem 1184 - Below the Main Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 0; l < k; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M' && printf("%.1f\n", sum / average_count);

//* Problem 1185 - Above the Secundary Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;
    // int count_row = 11;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 0; l < count_row; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    //     count_row--;
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M' && printf("%.1f\n", sum / average_count);

//* Problem 1186 - Below the Secundary Diagonal
    // float array[12][12], sum = 0, average_count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);
  

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    // }

    // for (int k = 0; k < 12; k++) {
    //     for (int l = 12 - k; l < 12; l++) {
    //         sum += array[k][l];
    //         average_count++;
    //     }
    // }
        
    // sum_of_average == 'S' && printf("%.1f\n", sum);
    // sum_of_average == 'M' && printf("%.1f\n", sum / average_count);

//* Problem 1187 - Top Area
    // double array[12][12], sum = 0;
    // int min = 0, max = 12, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 0; i <= 4; i++) {
    //     for (int j = (min + 1); j < (max - 1); j++) {
    //         sum += array[i][j];
    //         count++;
    //     }
    //     min++; max--;
    // }

    //     sum_of_average == 'S' && printf("%.1lf\n", sum);
    //     sum_of_average == 'M' && printf("%.1lf\n", sum / count);

//* Problem 1188 - Inferior Area
    // double array[12][12], sum = 0;
    // int min = 0, max = 12, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 11; i > 6; i--) {
    //     for (int j = (min + 1); j < (max - 1); j++) {
    //         sum += array[i][j];
    //         count++;
    //     }
    //     min++; max--;
    // }

    //     sum_of_average == 'S' && printf("%.1lf\n", sum);
    //     sum_of_average == 'M' && printf("%.1lf\n", sum / count);

//* Problem 1189 - Left area
    // double array[12][12], sum = 0;
    // int max_1 = 1, max_2 = 5, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 1; i < 6; i++) {
    //     for (int j = 0; j < max_1; j++) {
    //         sum += array[i][j];
    //         count++;
    //     }

    //     for (int k = 0; k < max_2; k++) {
    //         sum += array[i + 5][k];
    //         count++;
    //     }
    //     max_1++;
    //     max_2--;
    // }

    // sum_of_average == 'S' && printf("%.1lf\n", sum);
    // sum_of_average == 'M' && printf("%.1lf\n", sum / count);

//* Problem 1190 - Right Area
    // double array[12][12], sum = 0;
    // int max_1 = 10, max_2 = 6, count = 0;
    // char sum_of_average;

    // scanf("%c", &sum_of_average);

    // for (int i = 0; i < 12; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         scanf("%lf", &array[i][j]);
    //     }
    // }

    // for (int i = 1; i < 6; i++) {
    //     for (int j = 11; j > max_1; j--) {
    //         sum += array[i][j];
    //         count++;
    //     }

    //     for (int k = 11; k > max_2; k--) {
    //         sum += array[i + 5][k];
    //         count++;
    //     }
    //     max_1--;
    //     max_2++;
    // }

    // sum_of_average == 'S' && printf("%.1lf\n", sum);
    // sum_of_average == 'M' && printf("%.1lf\n", sum / count);

//! Problem 1435 - Square Matrix I (not solved)
    // int n = 1;

    // while (n) {
    //     scanf("%d", &n);

    //     if (n > 0 && n <= 100) {

    //         for (int i = 0; i < n; i++) {

    //             for (int j = 0; j < n; j++) {

    //                 if (j == n - 1)
    //                     printf(" %d*\n", j + 1);
    //                 else
    //                     printf(" %d   ", j + 1);
    //             }
    //         }

    //         printf("\n\n");
    //     }

    // }

//* Problem 1564 - Brazil World Cup
    // int n;

    // while(scanf("%d", &n) != EOF) {
    //     if (n >= 0 && n <= 100) {
    //         if (n == 0) printf("vai ter copa!\n");
    //         else printf("vai ter duas!\n");
    //     }
    // }

//* Problem 1589 - Bob Conduit
    // int test, r1, r2;

    // scanf("%d", &test);

    // while (test--) {
    //     scanf("%d %d", &r1, &r2);

    //     printf("%d\n", r1 + r2);
    // }

//* Problem 1759 - Ho Ho Ho
    // int n;

    // scanf("%d", &n);

    // if (n > 0 && n < 1000000) {
    //     for (int i = 0; i < n; i++) {
    //         if (i == n - 1) printf("Ho!\n");
    //         else printf("Ho ");
    //     }
    // }

//* Problem 1789 - The Race of Slugs
    // int n, slug, max;
    
    // while (scanf("%d", &n) != EOF) {

    //     if (n >= 1 && n <= 500) {

    //         for (int i = 0; i < n; i++) {
    //             scanf("%d", &slug);

    //             if (!i)  max = slug;

    //             if (slug > max) max = slug; 

    //         }

    //         if (max < 10) printf("1\n");
    //         else if (max >= 10 && max < 20) printf("2\n");
    //         else printf("3\n");
    //     }
    // }

//* Problem 1828 - Bazinga!
    // int test_count, result;
    // char a[8], b[8];

    // scanf("%d", &test_count);

    // if (test_count <= 100) for (int i = 1; i <= test_count; i++)  {

    //     scanf("%s %s", &a, &b);
    //     result = get_result(a, b);

    //     if (!result) printf("Caso #%d: Raj trapaceou!\n", i);
    //     else if (result == 1) printf("Caso #%d: Bazinga!\n", i);
    //     else printf("Caso #%d: De novo!\n", i);
    // }

//! Problem 1837 - Preface (Not Solved)
    // int a, b, q, r;

    // scanf("%d %d", &a, &b);

    // if (-1000 <= a && b <= 1000) {

    //     q = a / b;
    //     r = a % b;

    //     if (r < 0) {
    //         if (q < 0) q--;
    //         if (q > 0) q++; 
        
    //         r = a - (b * q);  
    //     }

    //     printf("%d %d\n", q, r);
    // }

//* Problem 1864 - Our Days Are Never Coming Back
    // int n;
    // char quote[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    // scanf("%d", &n);
    // if (n > 0 && n <= 34) for (int i = 0; i < n; i++) {
    //     if (i == n - 1) printf("%c\n", quote[i]);
    //     else printf("%c", quote[i]);
    // }
}