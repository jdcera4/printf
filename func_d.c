#include "holberton.h"

/**
 * func_s - function print a string
 *
 * @li: lis of parameters
 * Return: count
 */

int func_d(va_list li)
{
	char *p;
    int *num;
	int i, count = 0;

	num = va_arg(li, int*);
    p = itoa(num);

	for (i = 0; p[i] != '\0'; i++)
		{
		write(1, &p[i], 1);
		count++;
		}
	return (count);
}