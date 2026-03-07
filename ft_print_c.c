#include "ft_printf.h"

void	ft_print_c(va_list *args, t_flags *flags, int *len)
{
	if (flags -> width > 0)
	{
		*len = flags -> width;
		if (flags -> minus > 0)
			ft_putchar(va_arg(*args, char));
		while (flags -> width > 1)
		{
			ft_putchar(va_arg(*args, char));
			(flags -> width)--;
		}
		if (flags -> minus == 0)
			ft_putchar(va_arg(*args, char));
	}
	else
	{
		ft_putchar(va_arg(*args, char));
		(*len)++;
	}
}