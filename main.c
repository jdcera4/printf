#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int o;
	o = _printf("hola%c %s", "h", "solo");
	printf("\n%d\n", o);
	return (0);
}
