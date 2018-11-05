#include <stdio.h>
#include "../ft_strcat.c"
//#include "../ft_strlen.c"
#include "../../fct_sup/ft_memalloc.c"

int	main()
{
	char *s2;
	char *s1;

	s1 = ft_memalloc(sizeof(char)*10);
	s2 = ft_memalloc(sizeof(char)*20);
	printf(" originale = %s\n", strcat(s2,"0123456789"));
	printf(" copie  = %s\n", strcat(s2,"0123456789"));
	free(s1);
	free(s2);
	return (0);
}
