/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:29:38 by vlecoq-v          #+#    #+#             */
/*   Updated: 2018/11/06 17:09:12 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * maxi - min)))
		return (NULL);
	i = min;
	min--;
	while (min++ < max)
		tab[min - i] = min;
	return (tab);
}
