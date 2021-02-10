#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void main() {
//* Problem 1001 - Extremely Basic
    // int A, B, X;
    // scanf("%d %d", &A, &B);
    // X = A + B;
    // printf("X = %d\n", X);

//* Problem 1002 - Area of a Circle
    // double A, R, n;
    // scanf("%lf", &R);
    // n = 3.14159;
    // A = n * (R * R);
    // printf("A=%.4lf\n", A);

//* Problem 1003 - Simple Sum
    // int A, B, SOMA;
    // scanf("%d %d", &A, &B);
    // SOMA = A + B
    // printf("SOMA = %d\n", SOMA);

//* Problem 1004 - Simple Product
    // int A, B, PROD;
    // scanf("%d %d", &A, &B);
    // PROD = A * B;
    // printf("PROD = %d\n", PROD);

//* Problem 1005 - Average 1
    // float A, B, med;
    // scanf("%f %f", &A, &B);
    // med = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
    // printf("MEDIA = %.5f\n", med);

//* Problem 1006 - Average 2
    // float A, B, C, med;
    // scanf("%f %f %f", &A, &B, &C);
    // med = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);
    // printf("MEDIA = %.1f\n", med);

//* Problem 1007 - Difference
    // int A, B, C, D, DIFERENCA;
    // scanf("%d %d %d %d", &A, &B, &C, &D);
    // DIFERENCA = (A * B - C * D);
    // printf("DIFERENCA = %d\n", DIFERENCA);

//* Problem 1008 - Salary
    // int employees_number, worked_hours_number;
    // float hourly_amount, SALARY;
    // scanf("%d %d %f", &employees_number, &worked_hours_number, &hourly_amount);
    // printf("NUMBER = %d\n", employees_number);
    // SALARY = worked_hours_number * hourly_amount;
    // printf("SALARY = U$ %.2f\n",SALARY);

//* Problem 1009 - Salary With Bonus
    // double salary, sold_amount, salary_with_bonus;
    // char employee_name;

    // scanf("%s %lf %lf", &employee_name, &salary, &sold_amount);

    // salary_with_bonus = ((sold_amount * 15) / 100) + salary;
    // printf("TOTAL = R$ %.2lf\n", salary_with_bonus);

//* Problem 1010 - Simple Calculate
    // int code_of_product_1, code_of_product_2;
    // int unit_of_product_1, unit_of_product_2;
    // float price_of_product_1, price_of_product_2;

    // scanf("%d %d %f", &code_of_product_1, &unit_of_product_1, &price_of_product_1);
    // scanf("%d %d %f", &code_of_product_2, &unit_of_product_2, &price_of_product_2);

    // float value_to_pay = (unit_of_product_1 * price_of_product_1) + (unit_of_product_2 * price_of_product_2);
    // printf("VALOR A PAGAR: R$ %.2f\n", value_to_pay);

//* Problem 1011 - Sphere
    // double R, r, VOLUME, PI;
    // PI = 3.14159;

    // scanf("%lf", &r);
    // R = (r * r * r);
    // VOLUME = (4.0 / 3) * PI * R;
    // printf("VOLUME = %.3lf\n", VOLUME);

//* Problem 1012 - Area
/*  const float PI = 3.14159f;
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    scanf("%lf %lf %lf", &A, &B, &C);

    // a. the area of the rectangled triangle
    TRIANGULO = (A * C) / 2;
    // b. the area of the radius's circle
    CIRCULO = PI * (C * C);
    // c. the area of the trapezium
    TRAPEZIO = ((A + B) / 2) * C;
    // d. the area of ​​the square
    QUADRADO = (B * B);
    // e. the area of the rectangle
    RETANGULO = (A * B);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO); */

//* Problem 1013 - The Greatest
    //! using array
    // int a, b, s;
    // scanf("%d %d %d", &a, &b, &s);
    // int arr[3] = {a, b, s};

    // int i, n, Maior;
    // n = sizeof(arr) / sizeof(arr[0]);
    // Maior = arr[0];

    // for (i = 0; i < n; i++)
    // { 
    //     if (arr[i] > Maior)
    //     {
    //         Maior = arr[i];
    //     }
    // }

    // printf("%d eh o maior\n", Maior);

    //! using condition
    // int a, b, c, max_value;
    // scanf("%d %d %d", a, b, c);
    // max_value = a;
    // if (max_value < b)
    //     max_value = b;
    // if (max_value < c)
    //     max_value = c;
    // printf("%d eh o maior", max_value);

//* Problem 1014 - Consumption
    // int X;
    // float Y;
    // scanf("%d %f", &X, &Y);
    // printf("%.3f km/l\n", X / Y);

//* Problem 1015 - Distance
    // double x1, x2, y1, y2, distance;
    // scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // printf("%.4lf\n", distance);

//* Problem 1016 - Distance
    // int m, minutos;
    // scanf("%d", &m);

    // minutos = m * 2;

    // printf("%d minutos\n", minutos);

//* Problem 1017 - Fuel Spent
    // int hours, speed;
    // float liter_for_km = 12.00;
    // scanf("%d %d", &hours, &speed);

    // float fuel = (hours * speed) / liter_for_km;
    // printf("%.3f\n", fuel);

//* Problem 1018 - Banknotes
    // int N, handrad_notes, remain_notes;
    // char str[] = "nota(s) de R$";

    // scanf("%d", &N);
    // printf("%d\n", N);
    // handrad_notes = N / 100;
    // printf("%d %s 100,00\n", handrad_notes, str);
    // remain_notes = N % 100;
    // printf("%d %s 50,00\n", remain_notes / 50, str);
    // remain_notes %= 50;
    // printf("%d %s 20,00\n", remain_notes / 20, str);
    // remain_notes %= 20;
    // printf("%d %s 10,00\n", remain_notes / 10, str);
    // remain_notes %= 10;
    // printf("%d %s 5,00\n", remain_notes / 5, str);
    // remain_notes %= 5;
    // printf("%d %s 2,00\n", remain_notes / 2, str);
    // remain_notes %= 2;
    // printf("%d %s 1,00\n", remain_notes, str);

//* Problem 1019 - Time Conversion
    // int hours, minutes, seconds, total_seconds;

    // scanf("%d", &total_seconds);

    // hours = total_seconds / 3600;
    // minutes = (total_seconds % 3600) / 60;
    // seconds = total_seconds % 60;

    // printf("%d:%d:%d\n", hours, minutes, seconds);

//* Problem 1020 - Age in Days
    // int N, years, months, days;
    // scanf("%d", &N);

    // years = N / 365;
    // N %= 365;
    // months = N / 30;
    // N %= 30;
    // days = N;

    // printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

//* Problem 1021 - Banknotes and Coins
    // double N;
    // int notes, coins;
    // char str_notes[] = "nota(s) de R$";
    // char str_coins[] = "moeda(s) de R$";

    // scanf("%lf", &N);

    // notes = N;
    // coins = (N - notes) * 100;

    // printf("NOTAS:\n");
    // printf("%d %s 100.00\n", notes / 100, str_notes);
    // notes %= 100;
    // printf("%d %s 50.00\n", notes / 50, str_notes);
    // notes %= 50;
    // printf("%d %s 20.00\n", notes / 20, str_notes);
    // notes %= 20;
    // printf("%d %s 10.00\n", notes / 10, str_notes);
    // notes %= 10;
    // printf("%d %s 5.00\n", notes / 5, str_notes);
    // notes %= 5;
    // printf("%d %s 2.00\n", notes / 2, str_notes);

    // printf("MOEDAS:\n");
    // notes %= 2;
    // printf("%d %s 1.00\n", notes, str_coins);
    // printf("%d %s 0.50\n", coins / 50, str_coins);
    // coins %= 50;
    // printf("%d %s 0.25\n", coins / 25, str_coins);
    // coins %= 25;
    // printf("%d %s 0.10\n", coins / 10, str_coins);
    // coins %= 10;
    // printf("%d %s 0.05\n", coins / 5, str_coins);
    // coins %= 5;
    // printf("%d %s 0.01\n", coins, str_coins);

//* Problem 1035 - Selection Test 1
    // int A, B, C, D, CD_positive, CD_ab, Bc_Da;
    // scanf("%d %d %d %d", &A, &B, &C, &D);

    // CD_positive = C >= 0 && D >= 0;
    // CD_ab = (C + D) > (A + B);
    // Bc_Da = (B > C) && (D > A);
    // A = A % 2 == 0;

    // (A && CD_positive) && (CD_ab && Bc_Da) ?
    //  printf("Valores aceitos\n") : printf("Valores nao aceitos\n");

//* Problem 1036 - Bhaskara's Formula
    // double a, b, c, R1, R2, imp_cal;
    // scanf("%lf %lf %lf", &a, &b, &c);

    // R1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    // R2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    // imp_cal = (pow(b, 2) - (4 * a * c)) < 0 || a == 0;

    // (imp_cal) ? printf("Impossivel calcular\n")
    //  : printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);

//* Problem 1037 - Interval
    // float num;
    // scanf("%f", &num);

    // if (num < 0 || num > 100) {
    //     printf("Fora de intervalo\n");
    // }else {
    //     if (num <= 25.00000) {
    //         printf("Intervalo [0,25]\n");
    //     }else if (num >= 25.00001 && num <= 50.0000000) {
    //         printf("Intervalo (25,50]\n");
    //     }else if (num >= 50.00001 && num <= 75.0000000) {
    //         printf("Intervalo (50,75]\n");
    //     }else if (num >= 75.00001 && num <= 100.0000000) {
    //         printf("Intervalo (75,100]\n");
    //     }
    // }
}