#include "ft_print_alphabet.c"
#include <unistd.h>

int        ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main ()
{
	ft_print_alphabet();
	return (0);
} 
