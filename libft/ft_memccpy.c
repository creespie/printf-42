/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:30:53 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 12:30:55 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c,
size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	unsigned char	needle;
	size_t			i;

	needle = c;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (psrc[i] == needle)
			return (pdest + i + 1);
		i++;
	}
	return (NULL);
}
