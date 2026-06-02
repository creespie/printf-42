/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:28:50 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 17:18:29 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copy;
	t_list	*check;

	if (!lst || !f || !del)
		return (NULL);
	copy = NULL;
	while (lst != NULL)
	{
		check = ft_lstnew(f(lst->content));
		if (!check)
		{
			ft_lstclear(&copy, del);
			return (NULL);
		}
		ft_lstadd_back(&copy, check);
		lst = lst->next;
	}
	return (copy);
}
