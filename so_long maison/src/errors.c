/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bill <bmartin@student.42quebec.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:42:49 by bmartin           #+#    #+#             */
/*   Updated: 2023/01/30 17:03:20 by bill             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_error_exit(void)
{
	printf("%s", E_MAP_BORDER);
	exit(0);
}

