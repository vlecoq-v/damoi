#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;

//	s1 = (char*)ft_memalloc(sizeof(char*)*20));
	s1 = ft_strdup("MameMamen");
	s2 = ft_strdup("MameMamen");
	bzero(s1, 0);
	ft_bzero(s2, 0);
	printf("ORIGINALE = %s\n",s1);
	printf("COPIE = %s\n", s2);
}
