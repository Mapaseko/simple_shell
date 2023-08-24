#include "shell.h"

/**
 * bfree - will free a pointer and NULLs the address
 * Completed: by Iva and Mapaseko
 * @ptr: the address of the pointer to free
 *
 * Return: the 1 if freed, or otherwise 0.
 */
int bfree(void **ptr)
{
        if (ptr && *ptr)
        {
                free(*ptr);
                *ptr = NULL;
                return (1);
        }
        return (0);
}
