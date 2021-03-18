#include "holberton.h"

void func_s(va_list li)
{
     char *p;
     int i;
     p = va_arg(li, char*);
    

     for (i = 0; p[i] != '\0'; i++)
        {
             write(1, &p[i], 1);
        }
        
}