/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:58:21 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 13:03:04 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_check_string(char const *string, char const letter)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		total_start;
	int		total_end;

	index = 0;
	total_start = 0;
	total_end = ft_strlen((char *)s1);
	while (s1[index] && ft_check_string(set, s1[index]))
	{
		total_start++;
		index++;
	}
	while (s1[index])
		index++;
	index--;
	while (index > 0 && ft_check_string(set, s1[index]))
	{
		index--;
		total_end--;
	}
	return (ft_substr(s1, total_start, (total_end - total_start)));
}
