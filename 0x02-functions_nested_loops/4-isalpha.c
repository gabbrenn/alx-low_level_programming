#include "main.h"
/**
*_isalpha - check for alphabetic character
*@c: the character to be checked
*Return: 1 if is a letter, otherwise 0
*/
int _isalpha(int c)
{
if (c >= 'a' || c>= 'A')
{
return (1);
}
else
{
return (0);
}
}
