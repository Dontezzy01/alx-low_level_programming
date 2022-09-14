#include "main.h"
/**
 * print_last_digit- last digit printing
 * @n: the int to be checked
 * Return: the value of last digit
 */
int print_last_digit(int)
{
int a;
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
