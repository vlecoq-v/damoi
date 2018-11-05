#include <stdio.h>
#include "ft_putchar.c"


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
	return(0);
}
