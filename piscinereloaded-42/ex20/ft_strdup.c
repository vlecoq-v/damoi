/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:51:07 by vlecoq-v          #+#    #+#             */
/*   Updated: 2018/11/06 16:48:50 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s1;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(s1 = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
