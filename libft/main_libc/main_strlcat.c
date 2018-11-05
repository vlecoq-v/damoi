#include "../libft.h"
#include <stdio.h>

/*En gros on ne peut pas modifier une string une fois qu'on a fais des bails avec des "" car cette notation la fait passer de variable classique (modifiable) a variable read-only.

--> on passe par malloc puis un strcpy pour pouvoir lui faire un strcat

En revanche pour s1 et s2 pas besoin de leur allouer de la memoire et de les free
*/

int	main()
{
	char *s1;
	char *trgt1;
	char *trgt2;

//	s1 = ft_memalloc(sizeof(char)*10);
//	s2 = ft_memalloc(sizeof(char)*20);
	trgt1 = (char*)ft_memalloc(sizeof(char)*15);
	trgt2 = (char*)ft_memalloc(sizeof(char)*15);
	s1 = "Mamen";
	ft_strcpy(trgt1, s1);
	ft_strcpy(trgt2, s1);
//	printf("FT_STRLEN DST = %zu\n", ft_strlen(trgt1));
	printf(" Original - Resultat = %lu || String = %s\n", strlcat(trgt1,"Mqmen", 20), trgt1);
	printf(" Copie - Resultat = %zu || String  = %s\n", ft_strlcat(trgt2,"Mqmen", 20), trgt2);
//	free(s1);
//	free(s2);
	free(trgt1);
	free(trgt2);
	return (0);
}
