/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:55:17 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 17:33:33 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	index;
	size_t	return_val;

	index = 0;
	i = ft_strlen(dest);
	return_val = i + ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	else if (size <= i)
		return (size + ft_strlen(src));
	while (src[index] && i < size - 1)
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return (return_val);
}
