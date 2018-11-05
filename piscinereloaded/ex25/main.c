#include <stdio.h>
#include "ft_foreach.c"

void	ft_foreach(int *tab, int length,void (*f)(int));

void	ft_print(int i)
{
	printf("[%d]\n", i);
}

int	main()
{
	int	tab[20];
	void	(*f)(int);

	f = ft_print;
	ft_foreach(tab,20,f);
	return (0);
}
