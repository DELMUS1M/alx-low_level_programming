#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: print_to_98 - printing numbers to 98, separated by a column
 *
 * @n: counter.
 */
void main(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}  else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");

}
