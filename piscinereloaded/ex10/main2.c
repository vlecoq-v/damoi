#include <stdio.h>
#include "ft_swap.c"

int     main (void)
{
        int *a;
        int *b;
	int c;
	int d;

	c = 0;
	d = 200;
        a = &c;
        b = &d;
        printf("VALEUR DE A = %d, VALEUR DE B = %d\n", *a, *b);
        ft_swap(a, b);
        printf("VALEUR DE A = %d, VALEUR DE B = %d\n", *a, *b);
        return (0);
}
