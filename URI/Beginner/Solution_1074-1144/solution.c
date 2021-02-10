#include <stdio.h>
#include <stdlib.h>

void main() {
//* Problem 1074 - Even or Odd
    // int length = 0;
    // char *odd_even;
    // char *negative_positive;

    // scanf("%d", &length);

    // int numbers[length];

    // for (int i = 0; i < length; i++) {
    //     scanf("%d", &numbers[i]);
    // }

    // for (int j = 0; j < length; j++) {
    //     if (numbers[j] == 0) {
    //         printf("NULL\n");
    //     } else {
    //         if (numbers[j] % 2 == 0) {
    //             odd_even = "EVEN";
    //         } else {
    //             odd_even = "ODD";
    //         }

    //         if (numbers[j] > 0) {
    //             negative_positive = "POSITIVE";
    //         } else {
    //             negative_positive = "NEGATIVE";
    //         }
    //         printf("%s %s\n", odd_even, negative_positive);
    //     }
    // }

//* Problem 1075 - Remaining 2
    // int number;

    // scanf("%d", &number);
    // if (number < 10000) for (int i = 1; i < 10000; i++) (i % number == 2) && printf("%d\n", i);

//* Problem 1076 - Highest and Position
    // int max, numbers[100], position;

    // for (int i = 0; i < 100; i++)  scanf("%d", &numbers[i]);
    
    // max = numbers[0];
    // for (int i = 0; i < 100; i++) {
    //     if (max < numbers[i]) {
    //         max = numbers[i];
    //         position = i + 1;
    //     }
    // }

    // printf("%d\n%d\n", max, position);

//* Problem 1079 - Weighted Averages
    // int length;
    // scanf("%d", &length);

    // float total[length], first_number, second_number, third_number;

    // for (int i = 0; i < length; i++) {
    //     scanf("%f %f %f", &first_number, &second_number, &third_number);
    //     total[i] = ((first_number * 2) + (second_number * 3) + (third_number * 5)) / (2 + 3 + 5);
    // }

    // for (int i = 0; i < length; i++) printf("%.1f\n", total[i]);

//* Problem 1078 - Multiplication Table
    // int n;
    // scanf("%d", &n);

    // if (1 < n < 1000) for (int i = 1; i <= 10; i++) printf("%d x %d = %d\n", i, n, i * n);

//* Problem 1094 - Experiments
    // int length, numbers_of_animal, total_experiments = 0, rabbit = 0, rat = 0, frog = 0; 
    // scanf("%d", &length);
    // char names_of_animal;


    // for (int i = 0; i < length; i++) {
    //     scanf("%d %c", &numbers_of_animal, &names_of_animal);

    //     if (1 <= numbers_of_animal <= 15) {
            // total experiments
    //         total_experiments += numbers_of_animal;
            // total animals individual
    //         if (names_of_animal == 'C') rabbit += numbers_of_animal;
    //         if (names_of_animal == 'R') rat += numbers_of_animal;
    //         if (names_of_animal == 'S') frog += numbers_of_animal;
    //     }
    // }


    // printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total_experiments, rabbit, rat, frog);
    // printf("Percentual de coelhos: %.2f %%\n", (rabbit * 100.00) / total_experiments);
    // printf("Percentual de ratos: %.2f %%\n", (rat * 100.00) / total_experiments);
    // printf("Percentual de sapos: %.2f %%\n", (frog * 100.00) / total_experiments);

//* Problem 1095 - Sequence IJ 1
    // int i = 1, j = 60;

    // while (j != -5) {
    //     printf("I=%d J=%d\n", i, j);
    //     i += 3; j -= 5;
    // }


//* Problem 1096 - Sequence IJ 2
    // int i, j;
    // for (i = 1; i <= 9; i += 2) {
    //     for (j = 7; j >= 5; j--) {
    //         printf("I=%d J=%d\n", i, j);
    //     }
    // }

//* Problem 1097 - Sequence IJ 3
    // int i, j = 7, current_number = 5;

    // for (i = 1; i < 10; i += 2) {

    //     while (j >= current_number) {
    //         printf("I=%d J=%d\n",i, j);
    //         j--;
    //     }

    //     j += 5; current_number += 2;
    // }

//* Problem 1098 - Sequence IJ 4
    // double i, j;
    // int condition_count;
    
    // for (i = 0.0; i < 2.1; i += 0.2) {
    //     long int float_number_i = (i - (int)i) * 10;
    //     condition_count = 0;

    //     for (j = 1.00; condition_count < 3.00; j++) {
    //         (float_number_i != 0) ?
    //          printf("I=%.1lf J=%.1lf f = %li\n", i, (j + i), float_number_i) :
    //          printf("I=%li J=%li f = %li\n", (long int)i, (long int)(j + i), float_number_i);
    //         condition_count++;
    //     }
    // }

//* Problem 1099 - Sum of Consecutive Odd Numbers II
    // int length, x, y, i = 0;

    // scanf("%d", &length);

    // while (i < length) {

    //     scanf("%d %d", &x, &y);
    //     int total = 0, j = y;

    //     if (x < y) {
    //         j = x;
    //         x = y;
    //     }

    //     j++;
    //     for (; j < x; j++) if (j % 2 != 0)  total += j;

    //     printf("%d\n", total);
    //     i++;
    // }

//* Problem 1101 - Sequence of Numbers and Sum
    // int sum, x, y, i;

    // while (1) {
    //     sum = 0;
    //     scanf("%d %d", &x, &y);

    //     if (x <= 0 || y <= 0) break;

    //     i = y;

    //     if (y > x) {
    //         i = x;
    //         x = y;
    //     }

    //     for (; i <= x; i++) {
    //         printf("%d ", i);
    //         sum += i;
    //     }

    //     printf("Sum=%d\n", sum);
    // }

//* Problem 1113 - Ascending and Descending
    // int x, y;

    // while (1) {
    //     scanf("%d %d", &x, &y);
    //     if (x == y) break;

    //     if (x < y) {
    //         printf("Crescente\n");
    //     } else {
    //         printf("Decrescente\n");
    //     }
    // }

//* Problem 1114 - Fixed Password
    // int pass = 2002, in_pass;

    // while (1) {
    //     scanf("%d", &in_pass);
        
    //     if (in_pass == pass) {
    //         printf("Acesso Permitido\n");
    //         break;
    //     }

    //     printf("Senha Invalida\n");
    // }

//* Problem 1116 - Dividing X by Y
    // int length = 0, x, y, i = 0;

    // scanf("%d", &length);

    // while (i < length) {

    //     scanf("%d %d", &x, &y);
    //     if (y == 0) {
    //         printf("divisao impossivel\n");
    //     } else {
    //         printf("%.1f\n", x / (float)y);
    //     }
    //     i++;
    // }

//* Problem 1117 - Score Validation
    // float x, y;

    // while (1) {
    //     scanf("%f", &x);

    //     if (x >= 0 && x <= 10) {
            
    //         while (1) {
    //             scanf("%f", &y);

    //             if(y >= 0 && y <= 10) {
    //                 printf("media = %.2f\n", (x + y) / 2);
    //                 break;
    //             }
    //             printf("nota invalida\n");
    //         }

    //         break;
    //     }

    //     printf("nota invalida\n");
    // }

//* Problem 1118 - Several Scores with Validation
    // double x, y;
    // int in;

    // while (1) {
    //     int count = 0;
    //     scanf("%lf", &x);

    //     if (x >= 0 && x <= 10) {
    //         while (1) {
    //             scanf("%lf", &y);
    //             if (y >= 0 && y <= 10) {
    //                 printf("media = %.2lf\n", (x + y) / 2);
    //                 break;
    //             }
    //             printf("nota invalida\n");
    //         }
            
    //         while (1) {
    //             printf("novo calculo (1-sim 2-nao)\n");
    //             scanf("%d", &in);

    //             if (in == 1 || in == 2) break;
    //         }
            
    //     } else {
    //         printf("nota invalida\n");
    //     }

    //     if (in == 2) break;
    // }

//* Problem 1131 - Grenais
    // unsigned int Inter = 0, Gremio = 0, Draw = 0, test = 0, I, G, looBreaker;

    // while (looBreaker != 2) {
    //     scanf("%u %u", &I, &G);

    //     if (I == G)  Draw++;
    //     else if (I < G) Gremio++;
    //     else Inter++;        

    //     test++;

    //     while (1) {
    //         printf("Novo grenal (1-sim 2-nao)\n");
    //         scanf("%u", &looBreaker);

    //         if (looBreaker == 1 || looBreaker == 2) break;            
    //     }
    // }

    // printf("%u grenais\n", test);
    // printf("Inter:%u\n", Inter);
    // printf("Gremio:%u\n", Gremio);
    // printf("Empates:%u\n", Draw);

    // if (Inter > Gremio) printf("Inter venceu mais\n");
    // else if (Gremio > Inter) printf("Gremio venceu mais\n");
    // else printf("Não houve vencedor\n");

//* Problem 1132 -  Multiples of 13
    // int x, y, sum = 0, i;

    // scanf("%d\n%d", &x, &y);
    
    // i = x;

    // if (x > y) {
    //     i = y;
    //     y = x;
    // }

    // for (; i <= y; i++) {
    //     if (i % 13 == 0) continue;

    //     sum += i;
    // } 
    // printf("%d\n", sum);

//* Problem 1133 - Rest of a division
    // int x, y, i;

    // scanf("%d\n%d", &x, &y);

    // i = x;

    // if (x > y) {
    //     i = y;
    //     y = x;
    // }

    // i++;

    // for (; i < y; i++) {
    //     if (i % 5 == 2 || i % 5 == 3)
    //         printf("%d\n", i);    
    // }

//* Problem 1134 - Type of fuel
    // int i = 0, Alcohol = 0, Gasoline = 0, Diesel = 0;
    // int arr[3] = {Alcohol, Gasoline, Diesel};

    // while (i != 4) {
    //     scanf("%d", &i);

    //     if (i == 1) {
    //         Alcohol++;
    //     } else if (i == 2) {
    //         Gasoline++;
    //     } else if (i == 3) {
    //         Diesel++;
    //     }
    // }

    // printf("MUITO OBRIGADO\n");
    // printf("Alcool: %d\n", Alcohol);
    // printf("Gasolina: %d\n", Gasoline);
    // printf("Diesel: %d\n", Diesel); 
    
//* Problem 1144 - Logical Sequence
    // int a, b, c, n;

    // scanf("%d", &n);

    // if (1 < n < 1000) {
    //     for (int i = 1; i <= n; i++) {
    //         a = i;
    //         b = i * i;
    //         c = i * i * i;
    //         for (int j = 0; j <= 1; j++)
    //          printf("%d %d %d\n", a, b++, c++);
    //     }
    // }
}