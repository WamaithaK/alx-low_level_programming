#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: Input numer as an integer.
 *
 * Return: last digit
 */
int main(void)
{
	int r;

	r = print_last_digit(0);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
