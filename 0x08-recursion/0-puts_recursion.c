#include "main.h"
#include <unistd.h>

/* This is a function that prints a string, 
 * followed by a new line.
 * reutrn;
 */

void _puts_recursion(char *s)
	{
		if (*s)
		{
			_putchar(*s);
			_puts_recursion(s +1);
		}
		else
		{
			_putchar('\n');
		}
	}
