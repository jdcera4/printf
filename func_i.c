#include "holberton.h"
/**
 * func_i - function print int
 *
 * @li: lis of parameters
 *
 */
void func_i(va_list li)
{
     int *p;
     int i;
     p = va_arg(li, int*);
    

     for (i = 0; i < 10; i++)
        {
            write(1, &p[i], 1);
        }
        
}
