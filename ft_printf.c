#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	len;
	t_flags flags;
	
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			{
				ft_putchar(format[i]);
				i++;
				len++;
			}
		else
		{
			i = i + ft_find_bonus(&format[i], &len, &flags);
		}
	}
	return (len);
}