/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmartin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:35:07 by bmartin           #+#    #+#             */
/*   Updated: 2022/09/25 14:35:10 by bmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strupcase(char *str)

{
    int i ;
    i = 0;

    while(str[i])
        {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
            i++;
        }

    return(str);
}



int main()
{
    char str[] =("PAtate4");
    	printf("%s",ft_strupcase(str));
}