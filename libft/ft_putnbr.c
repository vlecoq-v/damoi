#include "libft.h"
//#include "ft_putchar.c"

void	ft_putnbr(int n)
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
}
