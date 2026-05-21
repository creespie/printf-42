/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:45:39 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 13:42:06 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	save_lines1(size_t *i, unsigned char *ptr1, unsigned char *ptr2)
{
	ptr1[*i] = ptr2[*i];
	(*i)++;
}

void	save_lines(unsigned char *ptr1, unsigned char *ptr2, size_t *len)
{
	(*len)--;
	ptr1[*len] = ptr2[*len];
}

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (ptr1 == NULL && ptr2 == NULL)
		return (NULL);
	i = 0;
	if (ptr1 < ptr2)
	{
		while (i < len)
			save_lines1(&i, ptr1, ptr2);
	}
	else
	{
		while (len > 0)
			save_lines(ptr1, ptr2, &len);
	}
	return (s1);
}
