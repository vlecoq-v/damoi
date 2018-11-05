#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if(min >= max)
	{
		tab = NULL;
		return(tab);
	}
	tab = malloc(sizeof(int) * max-min);
	i = min;
	min--;
	while (min++ < max)
		tab[min - i] = min;
	return(tab);
}
