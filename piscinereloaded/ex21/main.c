#include <stdio.h>
#include "ft_range.c"

int	main()
{
	int	*tab;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = -4;
	max = 2;
	printf("%d\n", tab[i]);
	tab = ft_range(min, max);
	if (tab == NULL)
		return (0);
	printf("CHECK\n");
	printf("%d\n", tab[i]);
	i--;
	while (i++ < max - min - 1)
		printf("tab = %d\n", tab[i]);
	return (0);
}
