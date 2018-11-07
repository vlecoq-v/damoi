/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:42:50 by vlecoq-v          #+#    #+#             */
/*   Updated: 2018/11/07 15:32:23 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*swtch;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			printf("CHECK %d\n", i);
			swtch = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swtch;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
