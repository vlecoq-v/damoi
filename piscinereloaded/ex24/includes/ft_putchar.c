#include <unistd.h>
#include "../srcs/putchar.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
