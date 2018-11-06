#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int	main()
{
	char *s1;
	char *s2;

	s1 = "test2";
	s2 = "test10";
	printf("RESULTAT OFFICIEL = %d\n", strcmp(s1, s2));
	printf("RESULTAT COPIE = %d\n", ft_strcmp(s1,s2));
	return (0);
}
