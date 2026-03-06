#include "ft_printf.h"

void	ft_print_s(va_list args, t_flags *flags, int *len)
{
	char	*string;

	string = va_arg(args, char*);
	if (flags -> width > ft_strlen(string) || (flags -> width > flags -> prec 
			&& flags -> prec < ft_strlen(string) && flags -> prec > 0))
	{
		if (flags -> minus > 0)
		{
			ft_print_string(flags, string, len);
			ft_process_spaces(flags, string, len);
		}
		else
		{
			ft_process_spaces(flags, string, len);
			ft_print_string(flags, string, len);
		}
	}
	else
	{
		ft_print_string(flags, string, len);
	}
}

void static	ft_print_string(t_flags *flags, char *string, int *len)
{
	int	i;

	i = 0;
	if (flags -> prec < ft_strlen(string)) 
	{
		while(i < flags -> prec)
		{
			ft_putchar(string[i]);
			i++;
		}
		*len = *len + flags -> prec;
	}
	else		
	{
		ft_putstr(string);
		*len = *len + ft_strlen(string);
	}
}

void static	ft_process_spaces(t_flags *flags, char *string, int *len)
{
	if (flags -> prec < ft_strlen(string))
		ft_print_spaces(flags, len, flags->width - flags->prec);
	else
		ft_print_spaces(flags, len, flags->width - ft_strlen(string));
}
