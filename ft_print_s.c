#include "ft_printf.h"

void	ft_print_s(va_list args, t_flags *flags, int *len)
{
	char	*string;
	int		i;

	i = 0;
	*string = va_arg(args, char*);
	if (flags -> width > ft_strlen(string) || (flags -> width > flags -> prec 
			&& flags -> prec < ft_strlen(string) && flags -> prec > 0))
	{
		if (flags -> minus > 0)
		{
			if (flags -> prec < ft_strlen(string)) //stringa
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
			if (flags -> prec < ft_strlen(string)) //spazi
			{
				while (flags -> width > flags -> prec)
				{
					ft_putchar(' ');
					flags ->width--;
				}
			}
			else
			{
				while (flags -> width > ft_strlen(string))
				{
					ft_putchar(' ');
					flags ->width--;
				}
			}
		}
		else
		{
			//spazi
			//stringa
		}
	}
	else
	{
		//stringa
	}
}