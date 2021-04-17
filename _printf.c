#include "holberton.h"
/**
 * _printf - My function about printf
 *
 * @format: Text that i have to print
 *
 * Return: 0?
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list li;

	count = 0;
	va_start(li, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
		{
		if (format[i] != '%')
		{
		write(1, &format[i], 1);
		count++;
		}
		else
		{
		if (format[i + 1] == 's')
		{
		count = func_s(li) + count;
		}
		if (format[i + 1] == 'c')
		{
		count += func_c(li);
		}
		if (format[i + 1] == '%')
		{
		count += func_por();
		}
		if (format[i + 1] == 'd')
		{
		count += func_por();
		}
		i++;
		}
		}
	return (count);
}
