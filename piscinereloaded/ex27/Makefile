# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 11:56:44 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/07 12:12:24 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
FILE = main.o

all: $(NAME)

$(NAME): intermediate
	gcc $(FLAG) $(FILE) -o $(NAME)

intermediate:
	gcc -c $(FLAG) main.c

clean:
	rm $(FILE)

fclean: clean
	rm $(NAME)

re: fclean all
