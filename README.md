# _Printf
   Function that prints text and data type specifiers

## Options

	* % start a format specification
    * c	Carácter	Cuando se utiliza con funciones, especifica un carácter de un solo byte; cuando se utiliza con funciones, especifica un carácter ancho.printfwprintf
    * C	Carácter	Cuando se utiliza con funciones, especifica un carácter ancho; cuando se utiliza con funciones, especifica un carácter de un solo byte.printfwprintf
    * d	Entero	Entero decimal firmado.
    * i	Entero	Entero decimal firmado.
    * o	Entero	Entero octal sin signo.
    * u	Entero	Entero decimal sin signo.
    * x	Entero	Entero hexadecimal sin signo; utiliza "".abcdef
    * X	Entero	Entero hexadecimal sin signo; utiliza "".ABCDEF

## REQUIREMENTS 
    *  Authorized functions and macros

        * write (man 2 write)
        * malloc (man 3 malloc)
        * free (man 3 free)
        * va_start (man 3 va_start)
        * va_end (man 3 va_end)
        * va_copy (man 3 va_copy)
        * va_arg (man 3 va_arg)

## Compilation

    * All your files will be compiled on Ubuntu 14.04 LTS
    * Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

## Use

    $ _printf ("hello worl%c", 'd');
    $ _printf ("text %specifier");