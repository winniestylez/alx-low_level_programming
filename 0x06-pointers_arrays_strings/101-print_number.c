#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int m, d, k;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	k = 1;

	while (d > 9)
	{
		d /= 10;
		k *= 10;
	}

	for (; k >= 1; k /= 10)
	{
		_putchar(((m / k) % 10) + 48);
	}
}
