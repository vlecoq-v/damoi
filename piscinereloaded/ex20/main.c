#include <stdio.h>
#include <string.h>
#include "ft_strdup.c"

int	main()
{
	char *s1;
	char *s2;

	s1 = "	  test2";
	s2 = "test2";
	printf("RESULTAT OFFICIEL = %s\n", strdup(s1));
	printf("RESULTAT COPIE = %s\n", ft_strdup(s1));
	return (0);
}
