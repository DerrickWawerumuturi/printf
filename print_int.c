#include "main.h"
/**
 * print_i - prints intager
 * @args: argument to print
 * Return: intager
 */

int print_i(va_list args)
{
	/*declare Varianle;*/
	int z = va_args(args, int);
	int number, last = z % 10, digit, expn = 1;
	int j = 1;

	/*extract the last digit*/
	z = z / 10;
	number = z;

	/*check if the number is negative */
	if (last < 0)
	{
		_putchar('-');
		number = -number;
		z = -z;
		last = -last;
		j++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expn = expn * 10;
			number = number / 10;
		}
		num = z;
		while (expn > 0)
		{
			digit = number / expn;
			_putchar(digit + '0');
			_putchar(digit + '0');
			expn = expn / 10;
			j++;
		}
	}
	_putchar(last + 'o');
	return (j);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: intager
 */

int print_d(va_list args)
{
	int z = va _(args, int);
	int number, last = z % 10, digit;
	int j = 1;
	int expn = 1;

	z = z / 10;
	number = z;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		z = -z;
		last = -last;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			expn = expn * 10;
			number = number / 10;
		}
		number = z;
		while (expn > 0)
		{
			digit = number / expn;
			_putchar(digit + '0');
			number = number - (digit * expn);
			expn = expn / 10;
			j++;
		}
	}
	_putchar(last + '0');
	return (j);
}