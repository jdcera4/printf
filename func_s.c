#include "holberton.h"

/**
 * func_s - function print a string
 *
 * @li: lis of parameters
 * Return: count
 */


int func_s(va_list li)
{
	char *p;
	int i, count = 0;

	p = va_arg(li, char*);

	for (i = 0; p[i] != '\0'; i++)
		{
		write(1, &p[i], 1);
		count++;
		}
	return (count);
}
