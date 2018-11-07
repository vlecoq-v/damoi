# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 18:08:40 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/07 10:59:47 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
FUNCTION = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): putchar putstr strcmp strlen swap
	ar -rc $(NAME) $(FUNCTION)

putchar:
	gcc $(FLAG) -c srcs/ft_putchar.c includes/ft_putchar.h

putstr:
	gcc $(FLAG) -c srcs/ft_putstr.c includes/ft_putstr.h

strcmp:
	gcc $(FLAG) -c srcs/ft_strcmp.c includes/ft_strcmp.h

strlen:
	gcc $(FLAG) -c srcs/ft_strlen.c	includes/ft_strlen.h

swap:
	gcc $(FLAG) -c srcs/ft_swap.c includes/ft_swap.h

clean:
	rm $(FUNCTION)

fclean: clean
	rm $(NAME)

re: fclean all
