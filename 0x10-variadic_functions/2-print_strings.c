#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vt;
	unsigned int g;
	char *str;

	va_start(vt, n);

	for (g = 0; g < n; g++)
	{
		str = va_arg(vt, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (g < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vt);
}
