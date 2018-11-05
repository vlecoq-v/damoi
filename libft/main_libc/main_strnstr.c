#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Resultat = %s\n", ft_strnstr("cacacaaliwoullah", "ali", 9));
	printf("Resultat = %s\n", strnstr("cacacaaliwoullah", "ali", 9));
	printf("Resultat = %s\n", ft_strnstr("", "asdf", 0));
	printf("Resultat = %s\n", strnstr("", "asdf", 0));

	return(0);
}
