#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point for the program
  * takes no arguments, all statements are in the main function
  *
  * Description: Program that prints alphabets in lower case
  * Return: program always returns 0(success)
  */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
