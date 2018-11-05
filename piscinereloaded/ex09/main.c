#include <stdio.h>
#include "ft_ft.c"

int	main (void)
{
	int *i;

	*i = 0;
	printf("VALEUR DE I = %d\n", *i);
	ft_ft(i);
	printf("VALEUR DE I = %d", *i);
	return (0);
} 
