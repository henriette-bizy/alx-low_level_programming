#include "main.h"
/**
 *_memcpy:copies n bytes to the dest from the src
*
 * @dest: pointer to memory area to be copied
 * @src: pointer to memory area where to copy
 * @n: byte size
 *
 * Return: a pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	while (n--)
		*pdest++ = *src++;

return (dest);
}
