#include <stdio.h>
#include <unistd.h>
#include "ft_foreach.c"

void	ft_foreach(int *tab, int length,void (*f)(int));

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(int i)
{
	printf("[%d]\n", i);
}

/*void	ft_putnbr(int n)
{
		if (n > 2147483647 || n < -2147483648)
					return;
			if (n == -2147483648)
					{
								ft_putnbr(n / 10);
										ft_putchar(8 + '0');
												return;
													}
				if (n < 0)
						{
									n = -n;
											ft_putchar('-');
												}
					if (n < 10)
							{
										ft_putchar(n + '0');
												return;
													}
						ft_putnbr(n / 10);
							ft_putchar(n % 10 + '0');
							ft_putchar('\n');
}*/


int	main()
{
	int	tab[1336];
//	void	(*f)(int);

//	f = ft_putnbr;
	ft_foreach(tab, 0, &ft_print);
//	ft_foreach(tab, 1337, &ft_putnbr);
	return (0);
}
