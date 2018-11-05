#include  "ft_putchar.c"

void	ft_print_numbers(void)
{
	int i;
	char X;

	i = 10;
	X = '0';
	while (i != 0)
	{
		ft_putchar(X);
		i--;
		X++;
	}
}
