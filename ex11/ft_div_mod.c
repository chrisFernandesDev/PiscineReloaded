/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:47:27 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/17 14:48:07 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
    	int     a;
    	int     b;
    	int     div;
    	int     mod;

    	a = 10;
    	b = 3;
    	div = 0;
    	mod = 0;
    	ft_div_mod(a, b, &div, &mod);
    	printf("%d %d", div, mod);
    	return (0);
}
*/
