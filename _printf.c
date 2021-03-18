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
	int i;
	va_list li;

	va_start(li, format);

	for (i = 0; format[i] != '\0'; i++)
		{
		if (format[i] != '%')
		{
		write(1, &format[i], 1);
		}
		else
		{
		if (format[i + 1] == 's')
		{
		func_s(li);
		}
		if (format[i + 1] == 'c')
		{
		func_c(li);
		}
		if (format[i + 1] == 'i')
		{
		func_i(li);
		}
		i++;
		}
		}
	return (0);
}
