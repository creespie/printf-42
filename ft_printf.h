#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
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
int	ft_find_bonus(char *format, int	i, int *len);
int	ft_printf(const char *format, ...);
void	ft_flags(t_flags *flags, char c);

#endif