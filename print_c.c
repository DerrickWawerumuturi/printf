#include "main.h"
/**
 * print_c - prints a character
 * @val: arguments it takes
 * Return: return 0 on succesfull
 */

int print_c(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (0);
}
