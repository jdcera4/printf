#include "holberton.h"
/**
 * func_por - function print int
 *
 * Return: count
 */
int func_por(void)
{
	int count = 0;

	write(1, "%", 1);
	count++;
	return (count);
}
