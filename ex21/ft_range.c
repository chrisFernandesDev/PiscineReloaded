/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:43:29 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/17 18:04:43 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	matrix = (int *)malloc(sizeof(int) * (size + 1));
	if (!matrix)
		return (NULL);
	while (i < size)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	return (matrix);
}
/*
int	main(void)
{
	int min = 0;
	int max = 20;
	int size = max - min;
	int i = 0;
	int *a = ft_range(min, max);

	while (i <= size && a[i])
	{
		printf("%d ", a[i]);
		i++;
	}
	free(a);
	return (0);
}
*/
