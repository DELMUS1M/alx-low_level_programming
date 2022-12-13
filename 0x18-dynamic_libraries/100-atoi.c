#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: the string to be changed
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, j, p;
	unsigned int n;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	n = 0;
	p = 1;
	for (j = 0; j <= i; j++)
	{
		c = *(s + j);
		if (c == '-')
		{
			p *= -1;
		}
		else if (c >= '0' && c <= '9')
		{
			n = n * 10 + (c - '0');
		}
		else if (n > 0)
		{
			break;
		}
	}

	return (p * n);
}
