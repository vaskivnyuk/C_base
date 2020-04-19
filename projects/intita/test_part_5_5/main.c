/*----------------------------------------------------------------
 * Алгоритмізація і програмування на мові С.
 * Заняття 5. Символьні рядки.
 * Частина 5. Особливості функцій введення-виведення.
 *----------------------------------------------------------------
 * ITA17
 * Vaskivnyuk Mykhailo
 * 21.05.2017
 *----------------------------------------------------------------
 * IDE: Qt Creator 3.0.0 Основан на Qt 5.2.0 (MSVC 2010, 32 бита)
----------------------------------------------------------------*/

/* ЗАВДАННЯ
1. Напишіть програму для введення рядка з клавіатури і виведення його на екран.
2. Для реалізації операцій введення-виведення використовуйте
лише функції cin.get(), gets() і puts().
*/

#include <stdio.h>

int main(void)
{
    const int str_length = 20;
    char string[str_length + 1];

    puts("Input a string");
    gets(string);
    puts("You've input:");
    puts(string);

    return 0;
}
