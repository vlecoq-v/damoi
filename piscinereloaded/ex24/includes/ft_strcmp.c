#include "../srcs/strcmp.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i + 1] != '\0' && s2[j + 1] != '\0')
	{
		i++;
		j++;
	}
	return(s1[i] - s2[j]);
}
