#include "ft_printf.h"

void	ft_print_spaces(t_flags *flags, int *len, int amount)
{
	while(amount > 0)
	{
		ft_padding(flags);
		flags ->width--;
		(*len)++;
		amount--;
	}
}

void	ft_padding(t_flags *flags)
{
	if (flags -> zero == 1 && flags -> minus == 0)
		ft_putchar('0');
	else
		ft_putchar(' ');
}