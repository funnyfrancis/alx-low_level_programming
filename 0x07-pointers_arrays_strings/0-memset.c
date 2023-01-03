#include "main.h"
/**
 * _memset - files memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Returned: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
