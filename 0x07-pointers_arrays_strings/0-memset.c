#include "main.h"
/**
 * @s: pointer holding the memory
 * @b:the constant byte to fill the constant
 * @n: number of bytes to fill the constant
 * */

 char *_memset(char *s, char b, unsigned int n ){
 
unsigned int i;
for(i = 0, i<n,i++){
   s[i] = b;

}
return (s);
 
 
 }

