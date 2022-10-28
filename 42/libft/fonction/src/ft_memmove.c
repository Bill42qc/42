/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:54:18 by bmartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:01:21 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n) {
  char *s;
  char *d;
  size_t i;

  i = 0;
  s = (char *)src;
  d = (char *)dest;
  if (dest == 0 && src == 0)
    return (0);
  if (d > s)
    while (n-- > 0)
      d[n] = s[n];
  else {
    while (i < n) {
      d[i] = s[i];
      i++;
    }
  }
  return (dest);
}
