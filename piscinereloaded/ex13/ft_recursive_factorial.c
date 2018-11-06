/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:27:05 by vlecoq-v          #+#    #+#             */
/*   Updated: 2018/11/06 12:36:12 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb - 1 <= 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
