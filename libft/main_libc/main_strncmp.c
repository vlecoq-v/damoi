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
	printf("ORIGINALE = %d\n", strncmp("MamenMbmenMamen", "MamenMamenMamen", 7));
	printf("COPIE = %d\n", ft_strncmp("MamenMamenMamen", "MamenMamenMamen", 7));
	printf("ORIGINALE = %d\n", strncmp("asadf", "", 2));
	printf("COPIE = %d\n", ft_strncmp("asadf", "", 2));
	return (0);
}
