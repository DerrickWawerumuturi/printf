#include "main.h"

/**
 * print_i - prints integer
 * @args: arguments to print
 * Return: integer
 */

int print_i(va_list args)
{
	int nom = va_arg(args, int);
	int ne_gative= 0;
	int digit, expn = 1;
	int jm = 0;

	int temp = nom;

	if (nom < 0)
	{
		_putchar('-');
		ne_gative = 1;
		nom = -nom;
		jm++;
	}
	while (temp / 10 != 0)
	{
		expn *= 10;
		temp /= 10;
	}
	while (expn >= 1)
	{
		digit = nom / expn;
		_putchar(digit + '0');
		nom %= expn;
		expn /= 10;
		jm++;
	}
	return (ne_gative ? jm + 1 : jm);
}

/**
 * print_d - print decimal
 * @args: arguments to be printed
 * Return: integer
 */

int print_d(va_list args)
{
	int niz = va_arg(args, int);
	int number, las = niz % 10, digit;
	int j = 1;
	int expn = 1;

	niz = niz / 10;
	number = niz;

	if (las < 0)
	{
		_putchar('-');
		number = -number;
		niz = -niz;
		las = -las;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expn = expn * 10;
			number = number / 10;
		}
		number = niz;
		while (expn > 0)
		{
			digit = number / expn;
			_putchar(digit + '0');
			number = number - (digit * expn);
			expn = expn / 10;
			j++;
		}
	}
	_putchar(las + '0');

	return (j);
}
