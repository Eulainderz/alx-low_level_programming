#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both in lower and uppercases
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
