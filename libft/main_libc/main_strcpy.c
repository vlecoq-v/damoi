#include <stdio.h>
#include "../ft_strncpy.c"
//#include "../ft_strlen.c"
#include "../ft_memalloc.c"

int	main()
{
	char *s2;
	char *s1;

	s1 = ft_memalloc(sizeof(char)*10);
	s2 = ft_memalloc(sizeof(char)*120);
	printf(" originale = %s\n", strncpy(s1,"0123456789",10));
	printf(" copie  = %s\n", ft_strncpy(s2,"0123456789",10));
	return (0);
}
