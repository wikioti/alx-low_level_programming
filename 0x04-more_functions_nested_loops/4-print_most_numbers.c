#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9.
 * Description: print the numbers except for 2 and 4.
 * Return: The numbers since 0 up to 9.
 */
void print_most_numbers(void)
{
	int w;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
