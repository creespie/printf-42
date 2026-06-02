/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lurossi <lurossi@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/05/20 12:07:54 by lurossi		   #+#	#+#			 */
/*   Updated: 2026/05/20 12:17:18 by lurossi		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	save_lines(int *i, const char *str, int *sign)
{
	if (str[*i] == '-')
		*sign *= -1;
	(*i)++;
}

int	ft_atoi(const char *str)
{
	long int	number;
	int			sign;
	int			i;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
		save_lines(&i, str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number = number + (str[i] - '0');
		i++;
		if (number > 2147483647 && sign == 1)
			return (-1);
		if (number > 2147483648 && sign == -1)
			return (0);
	}
	return (number * sign);
}
