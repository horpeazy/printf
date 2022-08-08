#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints the args as sprecified by the format
 * @format: format of the string to print
 *
 * Return: returns the length of the printed output
 */

int _printf(const char *format, ...)
{
    va_list ap;
    int i = 0, j = 0, k = 0;
    char c, *s;

    va_start(ap, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            switch(format[i + 1])
            {
                case('c'):
                    c = va_arg(ap, int);
                    _putchar(c);
                    k++;
                    break;
                case('s'):
                    s = va_arg(ap, char *);
                    j = 0;
                    while (s[j] != '\0')
                    {
                        _putchar(s[j++]);
                        k++;
                    }
                    break;
                default:
                    _putchar(format[i + 1]);
                    k++;
                    break;
            }
            i++;
        }
        else if (format[i] == '\\')
        {
            if (format[i + 1] == 'n')
            {
                _putchar('\n');
                k++;
            }
            i++;
        }
        else
        {
            _putchar(format[i]);
            k++;
        }
        i++;
    }
    va_end(ap);
    return (k);
}
