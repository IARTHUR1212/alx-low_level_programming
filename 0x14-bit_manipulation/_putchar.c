#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
