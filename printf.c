#include "main.h"

/**
 * _printf - returns a printf function
 * @format:the type of data type by the user
 * Return: number o characters
 */

int _printf(const char *format, ...)
{

	int num_of_char;

	num_of_char = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
			write(1, format, 1);
			num_of_char++;
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				format++;
				num_of_char++;
			}
			else if (*format == 'c')
			{
				char size_of_char = va_arg(args, int);

				write(1, &size_of_char, 1);
				num_of_char++;
			}
			else if (*format == 's')
			{
				char *arry = va_arg(args, char *);

				int len_of_str = 0;

				while (arry[len_of_str] != '\0')
					len_of_str++;
				write(1, arry, len_of_str);
				num_of_char += len_of_str;
			}
		}
		format++;
	}
	va_end(args);

	return (num_of_char);

}
