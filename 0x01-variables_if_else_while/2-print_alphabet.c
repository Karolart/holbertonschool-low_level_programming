#include <stdio.h>

/**
 * main - Entry point, prints the caracters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
