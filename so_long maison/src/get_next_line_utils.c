/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:43:25 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/18 20:49:01 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	ft_strlen2(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	res = (char *)malloc(sizeof(char) * (ft_strlen2(s1) + ft_strlen2(s2) + 1));
	if (s1 == NULL || s2 == NULL || !res)
		return (NULL);
	i = 0;
	j = 0;
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (free(s1), res);
}

char	*ft_strchr2(char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_substr_overflow(char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[i] != '\n' && s[i])
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	str = (char *)malloc(ft_strlen2(s) - i + 1);
	if (!str)
		return (NULL);
	i++;
	while (s[i])
		str[len++] = s[i++];
	str[len] = '\0';
	free(s);
	return (str);
}
