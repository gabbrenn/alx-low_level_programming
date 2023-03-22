#include "main.h"
/**
*print_sign - prints the sign of a number.
*@n: the character to be checked
*Return: Returns 1 and prints + if n is greater than zero returns 0 and prints 0 if n is zero returns -1 and prints - if n is less than zero0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}else
{
_putchar('-');
return (-1);
}
}
