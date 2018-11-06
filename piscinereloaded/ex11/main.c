#include <stdio.h>
#include "ft_div_mod.c"

int	main ()
{
	int a;
	int b;
	int pt_div;
	int pt_mod;

	a = 7;
	b = 0;
	pt_div = 0;
	pt_mod = 0;
	printf("VALEUR DE A = %d, VALEUR DE B = %d\n", a, b);
	ft_div_mod(a, b, &pt_div, &pt_mod);
	printf("VALEUR DE DIV = %d, VALEUR DE MOD = %d\n", pt_div, pt_mod);
	return (0);
} 
