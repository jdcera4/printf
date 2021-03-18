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
		func_por(li);
		}
		i++;
		}
		}
	return (count);
}
