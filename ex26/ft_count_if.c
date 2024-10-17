/*#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    long    n;
    
    n = nbr;
    if (n < 0)
    {
        n = n * (-1);
        ft_putchar('-');
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + 48);
}
*/
int     ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			++count;
		++i;
	}
	return (count);
}
/*
int     find_letter(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a')
            return 1;
        i++;
    }
    return 0;
}

int     main(void) {
    char *tab[] = {"banana", "uva", "melancia", "limao", "maca", NULL};
    int result = ft_count_if(tab, &find_letter);
    ft_putnbr(result);
    return 0;
}
*/