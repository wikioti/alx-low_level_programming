#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * 
 * Retun: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
