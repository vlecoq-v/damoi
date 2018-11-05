#include <stdio.h>
#include "ft_count_if.c"

int	ft_count_if(char **tab, int(*f)(char*));

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
		r++;
	return (r);
}

int	main()
{
	char **tab;
	int (*f)(char*);

	f = &ft_strlen;
//	tab[3];
	tab[0] = "test";
	tab[1] = "";
	tab[2] = "t";

	printf("RESULTAT R = %d\n", ft_count_if(tab,f));
	return(0);
}
