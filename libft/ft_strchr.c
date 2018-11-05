#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	y;
	char	*str;

	i = 0;
	y = 0;
	while(s[i] != c && s[i] != '\0')
		i++;
	if (s[i] != c)
		return (NULL);
	str = (char*)ft_memalloc(sizeof(char)*ft_strlen(s));
	while(s[i + y] != '\0')
	{
		str[y] = s[i + y];
		y++;
	}
	return(str);
}
