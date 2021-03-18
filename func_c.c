#include "holberton.h"
/**
 * func_c - function print single character
 *
 * @li: lis of parameters
 * Return: count
 */
int func_c(va_list li)
{
	char *a;
	int i = 0, count = 0;

	a = va_arg(li, char*);

	write(1, &a[i], 1);
	count++;

	return (count);
}
