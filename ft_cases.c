#include "ft_printf.h"

void	ft_cases(char letter, t_flags *flags, int *len, va_list *args)
{
	if (letter == 'c')
		ft_print_c(&args, flags, len);
	else if (letter == 's')
		ft_print_s(&args, flags, len);
	else if (letter == 'p')
		ft_print_p(&args, flags, len);
	else if (letter == 'd' || letter == 'i')
		ft_print_di(&args, flags, len);
	else if (letter == 'u')
		ft_print_u(&args, flags, len);
	else if (letter == 'x')
		ft_print_x(&args, flags, len);
	else if (letter == 'X')
		ft_print_X(&args, flags, len);
	else if (letter == '%')
		{
			ft_putchar('%');
			(*len)++;
		}
}