#include <stdio.h>
#include "ft_range.c"

int	main()
{
	int	*tab;
	int	i;
	int	min;
	int	max;

	tab = NULL;
	i = 0;
	min = -10;
	max = 0;
//	printf("%d\n", tab[i]);
	tab = ft_range(min, max);
	if (tab == NULL)
		return (0);
//	printf("CHECK\n");
//	printf("%d\n", tab[i]);
	while (i < max - min)
		printf("tab = %d\n", tab[i++]);
	return (0);
}
