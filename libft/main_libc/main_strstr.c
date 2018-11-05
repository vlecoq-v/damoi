#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Resultat = %s\n", ft_strstr("Maman !asidlunca alisudncna aslina liuwb ;nas;odknca", "ali"));
	printf("Resultat = %s\n", strstr("Maman !,Maman !asidlunca alisudncna aslina liuwb ;nas;odknca", "ali"));
	printf("Resultat = %s\n", ft_strstr("asdf", ""));
	printf("Resultat = %s\n", strstr("asdf", ""));

	return(0);
}
