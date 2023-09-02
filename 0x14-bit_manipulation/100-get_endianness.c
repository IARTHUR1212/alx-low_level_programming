#include "main.h"

/**
 * get_endianness - checks if machine is a little or a big endian
 * Return: 0 for a big, 1 for a little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
