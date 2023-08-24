#include "shell.h"

/**
 * _strlen - it will return the length of a string
 * Compiled: By Iva and Mapaseko
 * @s: the string whose length to check
 *
 * Return: the integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this will perform lexicogarphic comparison of two strangs.
 * Compiled: By Iva and Mapaseko
 * @s1: the first strang
 * @s2: the second strang
 *
 * Return: the negative if s1 < s2, and positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - it will check if needle starts with the haystack
 * Compiled: By Iva and Mapaseko
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: the address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - it will concatenates two strings
 * Compiled: By Iva and Mapaseko
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: the pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
