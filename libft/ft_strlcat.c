#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len;
	int	i;
	int	t;

	i = 0;
	t = strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return(t + dstsize);
	len = dstsize - strlen(dst) - 1;
	while (i < len && src[i] != '\0')
	{
		dst[t + i] = src[i];
		i++;
	}
	dst[t + i] = '\0';
	return (t + ft_strlen(src));
}
