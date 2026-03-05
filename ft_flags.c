#include "ft_printf.h"

void	ft_flags(t_flags *flags, char c)
{
	if (c == '-')
	{
		flags->minus = 1;
	}
	else if (c == '0')
	{
		flags->zero = 1;
	}
	else if (c == '#')
	{
		flags->hash = 1;
	}
	else if (c == ' ')
	{
		flags->space = 1;
	}
	else if (c == '+')
	{
		flags->plus = 1;
	}
}
