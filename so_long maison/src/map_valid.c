/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:42:46 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/25 11:42:47 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_valid(void)
{
	map_valid_length();
	map_valid_char();
	map_valid_char_count();
	map_valid_line_length();
	map_valid_border();
}
