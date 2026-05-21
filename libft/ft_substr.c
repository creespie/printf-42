/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:58:27 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 17:36:15 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*arr;
	size_t		index;

	index = 0;
	if (start > ft_strlen(s))
	{
		arr = (char *)malloc(1 * sizeof(char));
		if (!arr)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	if (len > (ft_strlen(s) - start))
		arr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		arr = (char *)malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (index < len && s[start + index])
	{
		arr[index] = s[start + index];
		index++;
	}
	arr[index] = '\0';
	return (arr);
}
