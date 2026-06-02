/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_bzero.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lurossi <lurossi@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/05/20 12:10:08 by lurossi		   #+#	#+#			 */
/*   Updated: 2026/05/20 12:12:12 by lurossi		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
