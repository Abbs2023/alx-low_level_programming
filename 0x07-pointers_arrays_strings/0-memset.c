#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of the memory to be filled
 * @b: the desired value
 * @n: the mumber of bytes to be changed
 *
 * Return: the changed array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
