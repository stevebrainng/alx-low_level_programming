#include <stdio.h>
/**
 * main - Entery point
 * Return: 0 if okay, non zero if error
 */
int main(void)
{
	int num;
	char bb;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (bb = 'a'; bb <= 'f'; bb++)
		putchar(bb);

	putchar('\n');
	return (0);
}
