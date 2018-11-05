#include <stdio.h>
#include "../ft_strdup.c"

int	main()
{
	printf(" string  = %s\n", ft_strdup("sdf 	i"));
	printf(" string  = %s\n", strdup("sdf 	i"));
	return (0);
}
