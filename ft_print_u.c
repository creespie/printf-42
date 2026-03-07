#include "ft_printf.h"

void	ft_print_u(va_list args, t_flags *flags, int *len)
{
	unsigned int	nbr;
	char			*string;

	nbr = va_arg(args, unsigned int);
	string = ft_uitoa(nbr);
	if (flags->prec == 0 && nbr == 0)
	{
    	if (flags->width > 0)
    	    ft_print_spaces(flags, len, flags->width);
		free(string);
    	return ;
	}
	if (flags -> minus == 1)
		ft_print_string(flags, string, len);
	if (flags -> minus == 1 && flags -> width > 0)
		ft_print_spaces(flags, len, flags -> width);
	else if (flags->width > flags->prec && flags->prec > ft_strlen(string))
		ft_print_spaces(flags, len, flags->width - flags->prec);
	else if (flags->width > ft_strlen(string))
		ft_print_spaces(flags, len, flags->width - ft_strlen(string));
	if (flags -> minus == 0)
		ft_print_string(flags, string, len);
	free(string);
}

static void	ft_print_string(t_flags *flags, char *string, int *len)
{
	while(ft_strlen(string) < flags -> prec)
	{
		ft_putchar('0');
		flags -> prec--;
		flags -> width--;
		(*len)++;
	}
	ft_putstr(string);
	*len = *len + ft_strlen(string);
	flags -> width = flags -> width - ft_strlen(string);
}