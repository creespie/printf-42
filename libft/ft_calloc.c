/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_calloc.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lurossi <lurossi@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/05/20 12:17:36 by lurossi		   #+#	#+#			 */
/*   Updated: 2026/05/20 12:18:04 by lurossi		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (count != 0 && size > (__SIZE_MAX__ / count))
		return (NULL);
	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}
