/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:24:15 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/04 01:58:11 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*release(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

//fonction pour compter le nombre de mot selon un separateur (c)

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}
// on malloc et retourne mot par mot

static size_t	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		wrd_num;
	int		i;
	size_t	len;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	wrd_num = -1;
	len = 0;
	while (++wrd_num < count_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		len = word_len(&s[i], c);
		split[wrd_num] = ft_substr(&s[i], 0, len);
		if (split[wrd_num] == NULL)
			return (release(split));
		i += len;
	}
	split[wrd_num] = NULL;
	return (split);
}
