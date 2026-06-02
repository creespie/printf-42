/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:49:52 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 16:40:09 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *string, char c)
{
	int	index;
	int	counter;

	counter = 0;
	index = 0;
	while (string[index])
	{
		if (string[index] != c && (index == 0 || string[index - 1] == c))
			counter++;
		index++;
	}
	return (counter);
}

void	ft_fill_word(char const *string, char c, char **mat, int word)
{
	int	counter;
	int	index;
	int	len_word;
	int	start;

	start = -1;
	index = 0;
	len_word = 0;
	counter = 0;
	while (string[index])
	{
		if (string[index] != c && (index == 0 || string[index - 1] == c))
			counter++;
		if (counter == word + 1 && start == -1)
			start = index;
		if (counter == word + 1 && string[index] != c)
			len_word++;
		index++;
	}
	mat[word] = ft_substr(string, start, len_word);
}

char	**ft_split(char const *string, char c)
{
	char	**mat;
	int		word_count;
	int		index_words;

	index_words = 0;
	word_count = ft_count_words(string, c);
	if (word_count == 0)
	{
		mat = malloc(1 * sizeof(char *));
		mat[0] = NULL;
		return (mat);
	}
	mat = malloc((word_count + 1) * sizeof(char *));
	if (!mat)
		return (NULL);
	while (index_words < word_count)
	{
		ft_fill_word(string, c, mat, index_words);
		index_words++;
	}
	mat[word_count] = NULL;
	return (mat);
}
