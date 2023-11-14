#include "main.h"

/**
 * print_d - print decimal
 * @args :decimal argument
 * Return:number
 */

int print_d(va_list args)
{
	int noz = va_arg(args, int);
	int ini;
	int keep_count = 1;
	int number = 0;
	
	if (noz == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		return (11);
	}
	if (noz < 0)
	{
		noz = (noz * -1);
		number += _putchar('-');
	}
	ini = noz;
	while (ini > 9)
	{
		ini /= 10;
		keep_count *= 10;
	}
	while (keep_count >= 1)
	{
		number += _putchar(((noz / keep_count) % 10) + '0');
		keep_count /= 10;
	}
	return (number);
}

/**
 * print_i -prints integer
 * @args:integer argument
 * Return: function
 */
int print_i(va_list args)
{
	return (print_d(args));
}

/**
 * print_b - prints binary representation
 * @args: unsigned int argument
 * Return: number of characters printed
 */
int print_b(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    int count = 1;
    int number = 0;

    if (n == 0)
    {
        return _putchar('0');
    }

    while (n >= (unsigned int)(count * 2))
    {
        count *= 2;
    }


    while (count > 0)
    {
        number += _putchar(((n / count)) + '0');
	n %= count;
        count /= 2;
    }

    return (number);
}

