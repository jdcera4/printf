#include <stdlib.h>
#include <unistd.h>
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
		for (i = 0; format[i] != '\0'; i++)
		;
		write(1, format, i);
		return (0);
}
