#include "main.h"

/**
 * get_bit - returns the value of bit at an index in decimal num
 * @n: num to search
 * @index: index of a bit
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
