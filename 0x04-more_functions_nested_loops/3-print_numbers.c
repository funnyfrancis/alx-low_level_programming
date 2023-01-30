#include <stdio.h>
#include "main.h"

/**
 * print_numers - function that print all numbers from 0 to 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	char c;

	for  (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

