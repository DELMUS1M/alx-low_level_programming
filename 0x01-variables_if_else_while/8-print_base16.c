#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char sm_letter = 'a';
	int num = 48;

	for (; sm_letter <= 'f'; sm_letter++)
	{
		for (; num < 58; num++)
			putchar(num);
		putchar(sm_letter);
		if (sm_letter == 'f')
			putchar('\n');
	}
	return (0);
}
