/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:32:03 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 14:27:27 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps2;
	unsigned char	*ps1;
	size_t			i;

	ps2 = (unsigned char *)s2;
	ps1 = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (ps2[i] != ps1[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
