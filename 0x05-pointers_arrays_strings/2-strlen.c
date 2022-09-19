#include "main.h"
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
