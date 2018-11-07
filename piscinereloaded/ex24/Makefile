# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 18:47:26 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/07 18:48:56 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR= ./srcs/

SRC= $(DIR)ft_putchar.c      \  
	 $(DIR)ft_putstr.c        \
	 $(DIR)ft_strcmp.c        \
	 $(DIR)ft_strlen.c        \
	 $(DIR)ft_swap.c

OBJ=        $(SRC:.c=.o)

NAME=        libft.a

CFLAGS=        -I ./includes/

AR=            ar rc

all:        $(NAME)

$(NAME):    $(OBJ)
	        $(AR) $(NAME) $(OBJ)

clean:
	        rm -f $(OBJ)

fclean:     clean
	        rm -f $(NAME)

re:            fclean all

.PHONY:    all clean fclean re
