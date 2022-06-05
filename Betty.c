#include <stdio.h>
/**
 * main - Prints Small Letter Alphabet except e and q
 * Return: 0
 */

int main(void)
{
	char excel;

	for (excel = 'a'; excel <= 'z'; excel++)
	{
		if (excel != 'e' && excel != 'q')
		putchar(excel);
	}
	return (0);
}
