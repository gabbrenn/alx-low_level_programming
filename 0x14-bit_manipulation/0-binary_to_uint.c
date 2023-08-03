#include "main.h"

/**
 * binary_to_uint - Prototype that will convert
 * a binary number to unsigned int
 * @b: This String will contain the binary number
 *
 * Return: It will return to the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        int g;
        unsigned int dec_val = 0;

        if (!b)
                return (0);

        // Check if the binary string is within the limits of unsigned int
        size_t binary_len = strlen(b);
        if (binary_len > (sizeof(unsigned int) * 8))
                return (0);

        for (g = 0; b[g]; g++)
        {
                if (b[g] < '0' || b[g] > '1')
                        return (0);
                dec_val = 2 * dec_val + (b[g] - '0');
        }

        return (dec_val);
}

