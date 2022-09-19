#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
