/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:57:13 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 17:33:54 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ps2;
	unsigned char	*ps1;

	ps2 = (unsigned char *)s2;
	ps1 = (unsigned char *)s1;
	i = 0;
	while ((ps1[i] != '\0' || ps2[i] != '\0') && i < n)
	{
		if (ps1[i] != ps2[i])
			return ((ps1[i] - ps2[i]));
		i++;
	}
	return (0);
}
