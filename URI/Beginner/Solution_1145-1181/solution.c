#include <stdio.h>

void main() {
//* Problem 1145 - Logical Sequence 2
    // int x, y, i = 1, j = 0;

    // scanf("%d %d", &x, &y); 

    // if (x < y && 1 < x < 20 && x < y < 100000) {

    //     while (i <= y) {

    //         j++;

    //         if (x > j) printf("%d ", i);
    //         if (x == j) {
    //             printf("%d\n", i);
    //             j = 0;
    //         }

    //         i++;
    
    //     }
    // }

//* Problem 1146 - Growing Sequences
    // int x;

    // while (1) {
    //     scanf("%d", &x);
    //     if (x == 0) break;

    //     for (int i = 1; i <= x; i++) {
    //         (x != i) ? printf("%d ", i) : printf("%d\n", i);
    //     }
    // }

//* Problem 1149 - Summing Consecutive Integers
    // int a, n, sum = 0;

    // scanf("%d", &a);

    // while(1) {
    //     scanf("%d", &n);

    //    if (n > 0) break;
    // }

    // for (int i = 0; i < n; i++) {
    //     sum += a;
    //     a++;
    // }

    // printf("%d\n", sum);

//* Problem 1150 - Exceeding Z
    // int x, z, count = 0, sum = 0;

    // scanf("%d", &x);

    // while(1) {
    //     scanf("%d", &z);
    //     if(z > x) break;
    // }

    // for (; sum < z; x++) {
    //     sum += x;
    //     count++;
    // }

    // printf("%d\n", count);

//* Problem 1151 - Easy Fibonacci
    // int x, fibonacci[45] = {0 , 1},
    //     sum = 0, i = 2, j = 0;

    // scanf("%d", &x);

    // if (0 < x && x < 46) {
    //     while (j < (sizeof(fibonacci) / 4) - 2) {
    //         sum = fibonacci[j] + fibonacci[j++ + 1];
    //         fibonacci[i++] = sum;
    //     }
    //     for (int k = 0; k < x; k++)
    //         k == x - 1 ? printf("%d\n", fibonacci[k]) : printf("%d ", fibonacci[k]);
    // }

//* Problem 1153 - Simple Factorial
    // int x, Factorial = 1;

    // scanf("%d", &x);

    // for (int i = 1; i <= x; i++) Factorial *= i;
    // printf("%d\n", Factorial);

//* Problem 1154 - Ages

    // int age, sum = 0;
    // float count = 0.0;

    // while (1) {
    //     scanf("%d", &age);

    //     if (age < 0) break;
    //     sum += age;
    //     count++;
    // }

    // printf("%.2lf\n", sum / count);

//* Problem 1155 - S Sequence
    // float s = 0.0;

    // for (int i = 1; i <= 100; i++) s += 1.00 / i;

    // printf("%.2lf", s);

//* Problem 1156 - S Sequence II
    // double sum = 1.0, j = 1;

    // for (int i = 3; i <= 39; i += 2)  sum += i / (j *= 2);
    
    // printf("%.2lf/n", sum);

//* Problem 1157 - Divisors I
    // int n;

    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++) n % i == 0 && printf("%d\n", i);

//* Problem 1158 - Sum of Consecutive Odd Numbers III
    // int n, x, y, i = 0, j, sum;

    // scanf("%d", &n);

    // while (i < n) {
        
    //     sum = 0;
    //     j = 0;

    //     scanf("%d %d", &x, &y);

    //     x % 2 == 0 && x++;

        
    //     while (j < y) {
    //         sum += x;
    //         j++;
    //         x += 2;
    //     }

    //     printf("%d\n", sum);

    //     i++;
    // }

//* Problem 1159 - Sum of Consecutive Even Numbers
    // int n, sum;

    // while (1) {
    //     sum = 0;
    //     scanf("%d", &n);

    //     if (!n) break;

    //     for (int i = 1; i < 6; i++) {
    //         if (n % 2 != 0) n++;
    //         sum += n;
    //         n += 2;
    //     }

    //     printf("%d\n", sum);
    // }

//* Problem 1160 - Population Increase
    // int test_cases, population_A, population_B;
    // double growing_1, growing_2;

    // if (test_cases >= 1 && test_cases <= 3000) while(test_cases--) {
    //     scanf("%d %d %lf %lf", &population_A, &population_B, growing_1, growing_2);

    //     if (population_A < population_B && population_A <= 100 && population_A < 1000000 && population_B <= 100 && population_B <= 1000000 && growing_1 >= 1.0 && growing_1 <= 10.0 && growing_2 >= 1.0 && growing_2 <= 10.0) {

    //     } else {
    //         printf("Mais de 1 seculo.\n");
    //     }
    // }

//* Problem 1164 - Perfect Number
    // int n, x, j, i = 0, sum;

    // scanf("%d", &n);

    // if (1 <= n <= 100) {
    //     while (i < n) {
    //         scanf("%d", &x);
    //         sum = 0;
    //         j = 1;
            
    //         if (1 < x  && x <= 100000000) {
    //             while (sum <= x / 2) {
    //                 if (x % j == 0) sum += j;
    //                 j++;
    //             }
    //        }
    //             sum == x ? printf("%d eh perfeito\n", x) : printf("%d nao eh perfeito\n", x);
    //         i++;
    //     }
    // }

//* Problem 1165 - Prime Number
    // int number, prime_number, i = 0, length;

    // scanf("%d", &length);

    // if (length >= 1 && length <= 100) {

    //     while (i < length) {

    //         prime_number = 0;

    //         scanf("%d", &number);

    //         if (number > 1 && number <= 10000000) {
    //             for (int i = 2; i < number; i++) {
    //                 if (number % i == 0 ) {
    //                     prime_number++;
    //                     break;
    //                 }
    //             }
    //         }        
        

    //         if (!prime_number) printf("%d eh primo\n", number);
    //         else printf("%d nao eh primo\n", number);
            
    //         i++;
    //     }
    // }

//* Problem 1172 - Array Replacement I
    // int array[10], x, i = 0;

    // while (i < 10) {
    //     scanf("%d", &x);
    //     x <= 0 ? x = 1 : x;
    //     array[i++] = x;
    // }

    // for (int j = 0; j < 10; j++) printf("X[%d] = %d\n", j, array[j]);

//* Problem 1173 - Array fill I
    // int array[10], n;

    // scanf("%d", &n);

    // for (int i = 0; i < 10; i++) {
    //     if (i == 0) array[i] = n;
    //    else array[i] = n *= 2;
    //     printf("N[%d] = %d\n", i, array[i]);
    // }

//* Problem 1174 - Array Selection I
    // float n, array[100];

    // for (int i = 0; i < 100; i++) {
    //     scanf("%f", &n);
    //     array[i] = n;
    // }
    // for (int j = 0; j < 100; j++) array[j] <= 10 && printf("A[%d] = %.1f\n", j, array[j]);

//* Problem 1175 - Array change I
    // int n, array[20];

    // for (int i = 19; i >= 0; i--) {
    //     scanf("%d", &n);
    //     array[i] = n;
    // }

    // for (int j = 0; j < 20; j++)   printf("N[%d] = %d\n", j, array[j]);

//* Problem 1176 - Fibonacci Array
    // unsigned long long int fibonacci_arr[61] = {0, 1}, fibonacci_number;
    // int j = 0, index, length, count = 0;

    // for (int i = 2; i < sizeof(fibonacci_arr) / 8; i++) {
    //     fibonacci_number = 0;
    //     fibonacci_number += fibonacci_arr[j] + fibonacci_arr[j + 1];
    //     fibonacci_arr[i] = fibonacci_number;
    //     j++;
    // }
    
    // scanf("%d", &length);

    // while (count < length) {
    //     scanf("%d", &index);

    //     if (index >= 0 && 60 >= index) {
    //         printf("Fib(%d) = %llu\n", index, fibonacci_arr[index]);
    //         count++;
    //     }
    // }
    
//* Problem: 1176 (Fibonacci Array) by hm azijul
    // int i, N, X;
    // unsigned long long int arr[61];
    // arr[0] = 0;
    // arr[1] = 1;

    // for (i = 2; i <= 60; i++) {
    //     arr[i] = arr[i - 1] + arr[i - 2];
    // }

    // scanf("%d", &N);
    // while (N--) {
    //     scanf("%d", &X);
    //     printf("Fib(%d) = %lld\n", X, arr[X]);
    // }
    
//* Problem 1177 - Array Fill II
    // unsigned int array[1000],
    //             T, i, j;

    // scanf("%u", &T);

    // if (T >= 2 & 50 >= T) {
    //     for (i = 0, j = 0; i < 1000; i++) {
    //         array[i] = j++;
    //         printf("N[%u] = %u\n", i, array[i]);
    //         if (j == T) j = 0;
    //     }
    // }

//* Problem 1178 - Array Fill III
    // double array[100],
    //        n;

    // scanf("%lf", &n);
    // array[0] = n;

    // for (int i = 0, j = 1; i < 100; i++) {
    //     array[j] = n /= 2;
    //     printf("N[%d] = %.4lf\n", i, array[i]);
    //     j++;
    // }

//* Problem 1179 - Array Fill IV
    // int input_arr[15],
    //     par[5],
    //     impar[5],
    //     count_even = 0,
    //     count_odd = 0,
    //     count = 3,
    //     condition = 0;

    // for(int i = 0; i < 15; i++) scanf("%d", &input_arr[i]);

    // for(int i = 0; i < 15; i++) {
    //     if (input_arr[i] % 2 == 0) count_even++;    
    //     else count_odd++;    
    // }

    // printf("%d %d\n", count_even, count_odd);

//* Problem 1180 - Lowest Number and Position
    // int n;
    // scanf("%d", &n);

    // if (n > 1 && n < 1000) {
    //     int array[n], index = 0;

    //     for (int i = 0; i < n; i++) scanf("%d", &array[i]);
        
    //     int lowest_number = array[0];

    //     for (int j = 1; j < n; j++) {
            
    //         if (lowest_number > array[j]) {
    //             lowest_number = array[j];
    //             index = j;
    //         }
    //     }

    //     printf("Menor valor: %d\n", lowest_number);
    //     printf("Posicao: %d\n", index);
    // }

//* Problem 1181 - Line in Array
    // float array[12][12],
    //       sum = 0;
    // int row;
    // char sum_of_average;
    // scanf("%u %c", &row, &sum_of_average);

    // if (row >= 0 && row <= 11) {

    //     for (int i = 0; i < 12; i++) {
    //         for (int j = 0; j < 12; j++) scanf("%f", &array[i][j]);
    //     }

    //     for (int k = row; k < (row + 1); k++) {
    //         for (int l = 0; l < 12; l++)  sum += array[k][l];
    //     }

    //     sum_of_average == 'S' && printf("%.1f\n", sum);
    //     sum_of_average == 'M'&& printf("%.1f\n", sum / 12.00);     
    // }
}