/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:31:29 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 12:31:30 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned char	letter;

	i = 0;
	letter = c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == letter)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
