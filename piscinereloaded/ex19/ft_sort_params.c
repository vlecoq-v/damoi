#include <stdio.h>
#include "ft_putchar.c"

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swtch_str(char *s1, char *s2)
{
	char *swtch;

	swtch = s1;
	s1 = s2;
	s2 = swtch;
}

int	main(int argc, char **argv)
{
	int	i;
	char	*swtch;

	i = 0;
	while (++i < argc - 2)
	{
		printf("WHILE \n");
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			printf("ENVOIE SWITCH %d et %d \n", i, i + 1 );
	//		ft_swtch_str(argv[i], argv[i + 1]);
			swtch = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swtch;
			printf("S1 = %s et S2 = %s \n", argv[i], argv[i +1]);
			i = 0;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
	return(0);
}
