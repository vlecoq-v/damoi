#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	size_t	y;
	char	*str;

	i = 0;
	y = 0;
	while(haystack[i] != '\0')
	{
		while(haystack[i + y] == needle[y] && needle[y] != '\0')
			y++;
		if(y == ft_strlen(needle))
		{
			y = 0;
			str = (char*)ft_memalloc(sizeof(char)*(ft_strlen(haystack) - i));
			str[ft_strlen(haystack) - i] = '\0';
			while(y <= ft_strlen(haystack) - i)
			{
				str[y] = haystack[i + y];
				y++;
			}
			return (str);
			y = 0;
		}
		i++;
	}
	return(NULL);
}
