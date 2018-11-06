#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_strdup.c"

int	main()
{
	char *s1;
	char *s2;

	s1 = "	  test2";
	s2 = "askdjf  \0 as";
	printf("RESULTAT OFFICIEL = |%s|\n", strdup(s2));
	printf("RESULTAT COPIE = |%s|\n", ft_strdup(s2));
	return (0);
}
