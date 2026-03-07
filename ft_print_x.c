#include "ft_printf.h"

void	ft_print_x(va_list args, t_flags *flags,int *len)
{
	unsigned int	nbr;
	char	*string;

	nbr = va_arg(args, unsigned int);
	string = ft_to_hex(nbr);
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
	if (flags -> hash == 1)
	{
		ft_putstr("0x");
		flags -> width = flags -> width - 2;
		(*len) = (*len) + 2;
	}
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

static char	*ft_to_hex(unsigned int nbr)
{
	int	len;
	int	index;
	char	*base;
	char	*string;
	
	if (nbr == 0)
		return (ft_strdup("0"));
	len = ft_count_len(nbr);
	index = len - 1;
	base = ft_strdup("0123456789abcdef");
	string = (char *)malloc((len + 1) * sizeof(char));
	while (nbr > 0)
	{
		string[index] = base[nbr % 16];
		nbr = nbr / 16;
		index--;
	}
	string[len] = '\0';
	free(base);
	return (string);
}

static int ft_count_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}