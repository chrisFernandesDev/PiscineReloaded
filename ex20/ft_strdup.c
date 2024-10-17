//#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	j = 0;

	while(src[i] != '\0')
		i++;

	str = (char *)malloc((i + 1)* sizeof(char));
	if (str == NULL)
		return NULL;
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
	(void)argc;
	printf("%s", ft_strdup(argv[1]));
	return (0);
}
*/