#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Resultat = %s\n", ft_strrchr("Maman !asidlunca alisudncna aslina liuwb ;nas;odknca", 97));
	printf("Resultat = %s\n", strrchr("Maman !,Maman !asidlunca alisudncna aslina liuwb ;nas;odknca", 97));
	printf("Resultat = %s\n", ft_strrchr("MAmen !", 97));
	printf("Resultat = %s\n", strrchr("MAmen !", 97));

	return(0);
}
