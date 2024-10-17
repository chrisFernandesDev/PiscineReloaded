#include <stdio.h> 

int     ft_sqrt(int nb)
{
	int     i;
	
	i = 1;
	while (i * i <= nb && i <= 46340)
    {
        if (i * i == nb)
            return (i);
        else
            i++;        
    }
	return (0);
}

int	main (void)
{
    int     n;

    n = 24;
	printf("%d\n", ft_sqrt(n));
	return (0);
}
