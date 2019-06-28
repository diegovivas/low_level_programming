#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 *@n:character
 * Return: Always 0.
 */
void print_number(int n)
{
int a, b, c, d, f;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else
	{
		n = n * 1;
	}
	b = n, c = 1;
	if (b != 0)
	{
		for (a = 1; b > 9; a++)
		{
			b = b / 10;
			c = c * 10;
		}
	}
	else
	{
		_putchar('0');
	}
	for (f = 1; f <= a; f++)
	{
		if (n != 0)
		{
			d = n / c;
			_putchar(d + '0');
			n = n % c;
			c = c / 10;
		}
	}
}
