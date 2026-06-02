/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:51:13 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 12:52:32 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dst;

	len = ft_strlen((char *)src);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strcpy(dst, (char *)src);
	return (dst);
}
