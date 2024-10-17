/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:27:14 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/17 16:31:52 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0')
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	*str;
	char *str2 = "sdfgh";
	(void)argc;
	(void)argv;
	str = ft_strdup("Zedro\n");
	printf("%s", str);
	free(str);
	return (0);
}
*/
