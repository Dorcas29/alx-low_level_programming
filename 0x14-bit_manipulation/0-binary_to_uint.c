#include "main.h"

/**
 * binary_to_uint -convert a binary number to an unsigned int.
 * @d: pointing to a string of 0 and 1 chars
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *d)
{
	int i;
	unsigned int j;

	j = 0;
	if (!d)
		return (0);
	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] != '0' && d[i] != '1')
			return (0);
	}
	for (i = 0; d[i] != '\0'; i++)
	{
		j <<= 1;
		if (d[i] == '1')
			j += 1;
	}
	return (j);
}
