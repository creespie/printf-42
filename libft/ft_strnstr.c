/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:57:52 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 17:37:20 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	else if (ft_strlen(needle) > len)
		return (NULL);
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] && haystack[i + j]
			== needle[j] && needle[j])
			j++;
		if (j == ft_strlen((char *)needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
