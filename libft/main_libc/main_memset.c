#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*s1;
	char	*s2;
	
	int 	test[3] = {10,10,7};


//	s1 = (char*)ft_memalloc(sizeof(char*)*20));
	s1 = ft_strdup("MameMamen");
	s2 = ft_strdup("MameMamen");
	printf("ORIGINALE = %s\n", memset(s1, 0, 9));
	printf("COPIE = %s\n", ft_memset(s2, 0, 9));
}
