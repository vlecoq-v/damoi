#include  "ft_putchar.c"

void	ft_print_alphabet(void)
{
	int i;
	char X;

	i = 26;
	X = 'a';
	while (i != 0)
	{
		ft_putchar(X);
		i--;
		X++;
	}
}
