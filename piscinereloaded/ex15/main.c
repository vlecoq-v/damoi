#include <stdio.h>
#include "ft_putstr.c"

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main ()
{
	ft_putstr(NULL);
} 
