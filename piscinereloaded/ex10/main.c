#include <stdio.h>
#include "ft_swap.c"

int	main (void)
{
	int a;
	int b;

	a = 0;
	b = 200;
	printf("VALEUR DE A = %d, VALEUR DE B = %d\n", a, b);
	ft_swap(&a, &b);
	printf("VALEUR DE A = %d, VALEUR DE B = %d\n", a, b);
	return (0);
} 
