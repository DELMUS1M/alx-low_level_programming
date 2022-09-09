#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int num = 48;

	for (; num < 58 ; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		if (num == 57)
			putchar('\n');
	}
	return (0);
}
