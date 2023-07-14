#include <stdio.h>

/**
 * main - Entry points
 *
 * Description: 'prints the alphabetics'
 *
 * Retun: Always (success)
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
