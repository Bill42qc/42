/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:30:41 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/20 14:17:50 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ifndef = if not define (on verifie que la library nexiste pas deja)
// define = on define la library si elle nxistais pas

#ifndef LIBFT_H
# define LIBFT_H

// on peut ajouter les library que lon souhaite

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

//on peut ajouter les prototypes des foncions que lon souhaite pour les inclure

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);








#endif