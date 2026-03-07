#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include  <stdarg.h>
#include "libft/libft.h"

typedef struct s_flags
{
	int minus;
	int zero;
	int hash;
	int space;
	int plus;
	long int width;
	long int prec;
} t_flags;

int ft_find_numbers(char *format, int *i);
int	ft_find_flags(char *format, int *len, t_flags *flags, va_list args);
int	ft_printf(const char *format, ...);
void	ft_flags(t_flags *flags, char c);
void	ft_cases(char *format, int i, int *len, va_list args);
void	ft_print_c(va_list args, t_flags *flags, int *len);
void	ft_print_spaces(t_flags *flags, char *string, int *len);
void	ft_padding(t_flags *flags);
void	ft_print_s(va_list args, t_flags *flags, int *len);
void	ft_print_di(va_list args, t_flags *flags, int *len);
char	*ft_uitoa(unsigned int n);
void	ft_print_u(va_list args, t_flags *flags, int *len);
void	ft_print_x(va_list args, t_flags *flags,int *len);
void	ft_print_X(va_list args, t_flags *flags,int *len);
void	ft_print_p(va_list args, t_flags *flags,int *len);

#endif