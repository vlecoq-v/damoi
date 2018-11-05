#include "libft.h"
//#include "ft_strlen.c"
#include "ft_memalloc.c"

char *ft_strdup(const char *s1)
{
	char 	*s2;
	int 	i;

	s2 = (char*)ft_memalloc(sizeof(char)*ft_strlen(s1));
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
