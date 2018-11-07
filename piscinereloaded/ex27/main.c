/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:50:42 by vlecoq-v          #+#    #+#             */
/*   Updated: 2018/11/07 13:16:45 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	arg_error(int argc)
{
	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	buf[1000];
	int		nread;
	int		fd;

	nread = 1;
	if (arg_error(argc) != 1)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		write(2, "Open error.\n", 14);
		return (0);
	}
	while (nread != 0)
	{
		nread = read(fd, buf, 1000);
		if (nread == -1)
			write(2, "Read error\n", 13);
		if (write(1, buf, nread) != nread)
			write(2, "Write error\n", 14);
	}
	close(fd);
	return (0);
}
