/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:16:11 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/17 15:18:51 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
    	int     nb;

    	nb = 14;
    	printf("%d\n", ft_iterative_factorial(nb));
    	return (0);
}
*/
