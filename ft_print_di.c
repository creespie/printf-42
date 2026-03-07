#include "ft_printf.h"

void	ft_print_di(va_list args, t_flags *flags, int *len)
{
	int	nbr;
	char	*string;

	nbr = va_arg(args, int);
	if (flags->prec == 0 && nbr == 0)
	{
    	if (flags->width > 0)
    	    ft_print_spaces(flags, len, flags->width);
    	return ;
	}
	string = ft_itoa(nbr);
	ft_space_plus(nbr, string, flags, len);
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

static void	ft_space_plus(int nbr, t_flags *flags, char *string, int *len)
{
	if (nbr > 0 && flags -> plus == 1)
	{
		ft_putchar('+');
		flags -> width--;
		(*len)++;
	}
	if (nbr > 0 && flags -> plus == 0 && flags -> space == 1)
	{
		ft_putchar(' ');
		flags -> width--;
		(*len)++;
	}
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