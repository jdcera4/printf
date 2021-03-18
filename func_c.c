#include "holberton.h"
/**
 * func_c - function print single character
 *
 * @li: lis of parameters
 *
 */
void func_c(va_list li)
{
	char *a;
	int i = 0;

	a = va_arg(li, char*);

	write(1, &a[i], 1);
}
