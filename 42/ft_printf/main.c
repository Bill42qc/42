/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:11:02 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/09 17:00:13 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)

{
	void *p;
	char c;
	p = "patate";

	ft_printchar(97);
	printf("\n");
	ft_printstr("patate");
	printf("\n");
	ft_printnbr(-2147483648);
	printf("\n");
	ft_hexa_print_min(46783129);
	printf("\n");
	ft_hexa_print_max(46783129);
	printf("\n");
	printf("%p", &c);
	printf("\n");
	printf("ladresse du pointeur en unsigned long int");
	printf("\n");
	printf("%p", &p);
	printf("\n");
	printf("le resultat du ft_ptr_To_hexa");
	printf("\n");
	ft_ptr_to_hexa(&p);
	printf("%s", NULL);
}
