#include "ft_printf.h"

int ft_find_numbers(char *format, int *i)
{
	long int	length;

	length = 0;
	while (format[*i] >= '0' && format[*i] <= '9')
	{
		length = length * 10 + (int)(format[*i] - '0');
		(*i)++;
	}
	return (length);
}