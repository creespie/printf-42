/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:52:40 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 12:54:28 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striter(char *s, void (*f)(char *))
{
	int		index;

	index = 0;
	while (s[index])
	{
		f(&s[index]);
		index++;
	}
	return (NULL);
}
