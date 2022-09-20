#include <stdio.h>
#include "main.h"

/**
* puts_half - prints the second half of the string
* @str: the string reference
* Return: 0
*/

void puts2(char *str)
{
	int i;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
