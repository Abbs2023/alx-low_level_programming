#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{

 if (b == NULL)
        return 0;

    unsigned int result = 0;
    unsigned int length = (unsigned int)strlen(b) - 1;
    while (*b != '\0') 
{
        if (*b != '0' && *b != '1')
            return 0;
        result += (*b - '0')* binaryToUnitHelper(2,length);
        length--;
        b++;
    }
    return result;
}

unsigned int binaryToUnitHelper(int base, int power)
{
    if(power == 0)
        return (1);
    return (base * binaryToUnitHelper(base, power - 1));
}
