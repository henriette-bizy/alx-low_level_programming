#include "main.h"
/**
 * _memset: function to write constansts on some reserved bytes
 * @s: pointer holding the memory
 * @b:the constant byte to fill the constant
 * @n: number of bytes to fill the constant
 * Return : *s
 */

 char *_memset(char *s, char b, unsigned int n)
{ 
      unsigned int i;

      for(i = 0, i< n, i++)
      {
          s[i] = b;
      }
      return (s); 
 }

