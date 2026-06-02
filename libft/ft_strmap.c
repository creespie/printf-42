/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:56:22 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 13:02:24 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*string;
	int		index;

	index = 0;
	string = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[index])
	{
		string[index] = f(s[index]);
		index++;
	}
	string[index] = '\0';
	return (string);
}
