#include "ft_printf.h"

int	ft_find_flags(char *format, int *len, t_flags *flags, va_list *args)
{
	int	i;

	i = 0;
	ft_memset(flags, 0, sizeof(t_flags));
	flags->prec = -1;
	while (format[i] == '-' || format[i] == '0' || format[i] == '#' 
		|| format[i] == ' ' || format[i] == '+')
	{
		ft_flags(flags, format[i]);
		i++;
	}
	flags -> width = ft_find_numbers(format, &i);
	if (format[i] == '.')
	{
		i++;
		flags -> prec = ft_find_numbers(format, &i);
	}
	ft_cases(format[i], flags, len, &args);
	i++;
	return(i);
}
