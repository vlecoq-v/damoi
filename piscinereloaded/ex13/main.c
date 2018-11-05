#include <stdio.h>
#include "ft_recursive_factorial.c"

int	main ()
{
	int nb;

	nb = ft_recursive_factorial(-1);
	printf("VALEUR DE FACTORIEL = %d\n", nb);
	return (0);
} 
