#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int yeas;

int t1(void)
{
    setlocale(0, ".UTF8");
    int rem4;

    printf("Введите год: ");
    if (scanf("%d", &yeas) != 1) {
        printf("Ошибка ввода\n");
        return 1;
    }

    rem4 = yeas % 4;

    if ((rem4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("год %d високосный\n", yeas);
    }
    else {
        printf("год %d не високосный\n", yeas);
    }

    return 0;
}