/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:25 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/18 20:48:58 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_calloc2(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	while (i < (nitems * size))
		ptr[i++] = '\0';
	return (ptr);
}

char	*ft_new_stash(char *stash)
{
	int		i;
	char	*str;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		str[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		str[i] = stash[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read(int fd, char *stash)
{
	int		bytes_readed;
	char	*buff;

	buff = ft_calloc2((BUFFER_SIZE + 1) * sizeof(char), 1);
	if (!buff)
		return (NULL);
	bytes_readed = 1;
	while (!ft_strchr2(stash, '\n') && bytes_readed != 0)
	{
		bytes_readed = read(fd, buff, BUFFER_SIZE);
		if (bytes_readed == -1)
		{
			free(buff);
			buff = NULL;
			free(stash);
			stash = NULL;
			return (NULL);
		}
		buff[bytes_readed] = '\0';
		stash = ft_strjoin2(stash, buff);
	}
	free(buff);
	buff = NULL;
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!stash)
		stash = ft_calloc2(1, 1);
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_new_stash(stash);
	stash = ft_substr_overflow(stash);
	return (line);
}
