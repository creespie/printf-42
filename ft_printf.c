#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	int	len;
	t_flags flags;
	va_list args;

	len = 0;
	i = 0;
	va_start(args, format);
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
			i = i + ft_find_flags(&format[i], &len, &flags, &args);
		}
	}
	va_end(args);
	return (len);
}