#include <unistd.h>

/**
 * _putchar - prints a char to the stdout
  * @c: char to print
  *
  * Return: the num of char printed
  */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
