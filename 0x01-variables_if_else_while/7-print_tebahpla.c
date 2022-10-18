#include <stdio.h>
/**
 * main - Entery point
 * Return: 0 if ok, non zero if errors
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
