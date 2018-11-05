#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s1;
	int	i;

	i = 0;
	while (src[i++] != '\0')
	s1 = malloc(sizeof(char) * i);
	s1 = src;
	return (s1);
}
