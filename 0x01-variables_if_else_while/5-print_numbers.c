#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 10)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
