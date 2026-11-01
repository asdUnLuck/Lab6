#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double x;

int t2(void)
{
    printf("Введите x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }

    /*
       Контрольные примеры:

       1) x = 4:
          x > 3.6, значит
          F(4) = 45 * 4^2 + 5 = 725

       2) x = 2:
          x <= 3.6, значит
          F(2) = 5 * 2 / (10 * 2^2 + 1)
               = 10 / 41 ≈ 0.243902

       3) x = 3.6:
          x <= 3.6, значит
          F(3.6) = 5 * 3.6 / (10 * 3.6^2 + 1)
                 ≈ 0.137825
    */

    printf("F(%.2f) = %.6f\n",
        x,
        (x > 3.6) ? (45.0 * x * x + 5.0)
        : (5.0 * x / (10.0 * x * x + 1.0)));

    return 0;
}