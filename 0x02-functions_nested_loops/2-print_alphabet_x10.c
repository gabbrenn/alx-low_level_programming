#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
char letter;
int co = 0;
while (co < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
co++;
_putchar('\n');
}
}
