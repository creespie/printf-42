#include "ft_printf.h"

void	ft_print_p(va_list *args, t_flags *flags,int *len)
{
	unsigned long	nbr;
	char	*string;

	nbr = (unsigned long)va_arg(*args, void *);
	if (nbr == 0)
	{
		ft_putstr("(nil)");
    	(*len) += 5;
    	return ;
	}
	string = ft_to_hex(nbr);
	if (flags -> minus == 1)
		ft_print_string(flags, string, len);
	if (flags->width > ft_strlen(string) && flags -> minus == 1)
		ft_print_spaces(flags, len, flags->width - ft_strlen(string));
	else if(flags->width > ft_strlen(string) && flags -> minus == 0)
		ft_print_spaces(flags, len, flags->width - ft_strlen(string) - 2);
	if (flags -> minus == 0)
		ft_print_string(flags, string, len);
	free(string);
}

static void	ft_print_string(t_flags *flags, char *string, int *len)
{
	ft_putstr("0x");
	flags -> width -= 2;
	(*len) += 2;
	ft_putstr(string);
	*len = *len + ft_strlen(string);
	flags -> width = flags -> width - ft_strlen(string);
}

static char	*ft_to_hex(unsigned long nbr)
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

static int ft_count_len(unsigned long nbr)
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