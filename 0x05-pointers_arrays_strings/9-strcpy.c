#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src, included the
 * terminate null byte (\0), to the buffer pointed to by dest
 * @dest: the first parameter
 * @src: second prameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = o;
	while (*(src + i))
	{
		i++;
	}
	*(dest + i) = '\0';
	i--;
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
