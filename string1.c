#include "shell.h"

/**
 * _strcpy - it will copy a string
 * Compiled: By Iva and Mapaseko
 * @dest: the destination
 * @src: the source
 *
 * Return: the pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - It will duplicate a string
 * Compiled: By Iva and Mapaseko
 * @str: the string to duplicate
 *
 * Return: the pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - it will print an input string
 * Compiled: By Iva and Mapaseko
 *@str: the string to be printed
 *
 * Return: with nothing
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - it will write the character c to stdout
 * Compiled: By Iva and Mapaseko
 * @c: The character to print
 *
 * Return: it On success 1.
 * On the error, -1 is returned, and the errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
