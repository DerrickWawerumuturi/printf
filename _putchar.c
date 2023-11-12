#include "main.h"
/**
 * _putcar - writes character c to stdout
 * @c: the characteristic to print
 * Return: on sucess 1
 */

int _putcchar(char c)
{
	return (write(1, &c, 1));
}
