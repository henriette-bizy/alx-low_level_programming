#include "main.h"
/**
 * _memcpy:copies n bytes to the dest from the src
 * @des:destination 
 * @src : source
 * @n: the bytes to be copied 
 *
 * Return :dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *pdest = dest;

    while (n--)
	*pdest++ = *src++;

return (dest);
}
