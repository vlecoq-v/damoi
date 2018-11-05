#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0' && i2 < n)
	{
		s1[i1] = s2[i2];
		i2++;
		i1++;
	}
	if (s1[i1] != '\0')
		s1[i1] = '\0';
	return(s1);
}
