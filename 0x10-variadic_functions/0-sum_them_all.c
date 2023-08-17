#include"variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all the  parameters.
 * @n:The number of variable to be summed.
 * @...: The variables to be summed up.
 * Return: 0 if n == 0.
 *	otherwise: return the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ta;
	unsigned int i, sum = 0;

	va_start(ta, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ta, int);

	va_end(ta);

	return (sum);
}
