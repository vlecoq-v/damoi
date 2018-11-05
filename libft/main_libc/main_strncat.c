#include <stdio.h>
#include "../ft_strncat.c"
#include "../ft_strcpy.c"
//#include "../ft_memalloc.c"
#include "../ft_memdel.c"

/*En gros on ne peut pas modifier une string une fois qu'on a fais des bails avec des "" car cette notation la fait passer de variable classique (modifiable) a variable read-only.

--> on passe par malloc puis un strcpy pour pouvoir lui faire un strcat

En revanche pour s1 et s2 pas besoin de leur allouer de la memoire et de les free
*/

int	main()
{
	char *s2;
	char *s1;
	char *trgt1;
	char *trgt2;

//	s1 = ft_memalloc(sizeof(char)*10);
//	s2 = ft_memalloc(sizeof(char)*20);
	trgt1 = (char*)ft_memalloc(sizeof(char)*20);
	trgt2 = (char*)ft_memalloc(sizeof(char)*20);
	s2 = "Mamen ";
	s1 = "01";
	ft_strcpy(trgt1, s1);
	ft_strcpy(trgt2, s2);
	printf(" originale = %s\n", strncat(trgt1,"0123456789",7));
	printf(" copie  = %s\n", ft_strncat(trgt2,"0123456789",7));
//	free(s1);
//	free(s2);
	free(trgt1);
	free(trgt2);
	return (0);
}
