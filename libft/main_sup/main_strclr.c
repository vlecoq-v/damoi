#include "../ft_strclr.c"
#include <stdio.h>

int	main(void)
{
	char	str[10] = "Mamen";

	ft_strclr(str);
	printf("String = %s\n",str); 
	return(0);
}
