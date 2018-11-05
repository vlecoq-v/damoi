#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = (char*)ft_memalloc(sizeof(char)*10);
	s2 = (char*)ft_memalloc(sizeof(char)*10);
	ft_strcpy(s1, "Mamen");
	ft_strcpy(s2, "Mbmen");
	printf("ORIGINALE = %d\n", strcmp("asdf", ""));
	printf("COPIE = %d\n", ft_strcmp("asdf", ""));
	printf("ORIGINALE = %d\n", strcmp("", ""));
	printf("COPIE = %d\n", ft_strcmp("", ""));
	return (0);
}
