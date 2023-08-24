#include "shell.h"

/**
 *_eputs - it will prints an input string
 * Compiled: By Iva and Mapaseko
 * @str: the string to be printed
 *
 * Return: with  Nothing
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - it writes the character c to the stderr
 * Compiled: By Iva and Mapaseko
 * @c: The character to print
 *
 * Return: On the success of 1.
 * On the error, -1 is returned, and the errno is set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - it writes the character c to given fd
 * Compiled: By Iva and Mapaseko
 * @c: The character to print
 * @fd: The filedescriptor to write to
 *
 * Return: On the success 1.
 * On the error, -1 is returned, and the errno is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *_putsfd - it prints an input string
 * Compiled: By Iva and Mapaseko
 * @str: the string to be printed
 * @fd: the filedescriptor to write to
 *
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
