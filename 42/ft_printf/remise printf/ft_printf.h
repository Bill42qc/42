/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <bmartin@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:00:29 by bmartin           #+#    #+#             */
/*   Updated: 2022/11/10 20:08:26 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ifndef = if not define (on verifie que la library nexiste pas deja)
// define = on define la library si elle nxistais pas

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// on peut ajouter les library que lon souhaite

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

//on peut ajouter les prototypes des foncions que lon souhaite pour les inclure

//          easy fonction

int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_nbrlen(unsigned long int n, int base);
int	ft_hexa_print_min(unsigned int n);
int	ft_hexa_print_max(unsigned int n);
int	ft_ptr_to_hexa(uintptr_t ptr);
int	ft_printf(const char *format, ...);
int	ft_printu(unsigned int n);
int	ft_len(int n, int base);

#endif
