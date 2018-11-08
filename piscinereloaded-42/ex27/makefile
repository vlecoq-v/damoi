# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 11:56:44 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/08 12:25:03 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
FILE = ft_display_file.o

all: $(NAME)

$(NAME): intermediate
	gcc $(FLAG) $(FILE) -o $(NAME)

intermediate:
	gcc -c $(FLAG) ft_display_file.c

clean:
	rm -f $(FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all
