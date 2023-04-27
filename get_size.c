#include "main.h"

/**
 * get_size -  A function that calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int latest_i = *i + 1;
	int size = 0;

	if (format[latest_i] == 'l')
		size = S_LONG;
	else if (format[latest_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = latest_i - 1;
	else
		*i = latest_i;

	return (size);
}
