# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 10:14:26 by vlecoq-v          #+#    #+#              #
#    Updated: 2018/11/08 11:40:14 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc
CC = gcc
OBJ = $(SRC_NAME:.c=.o)


SRC_PATH = ./srcs/
SRC_NAME = ft_putchar.c \
			ft_strlen.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_swap.c
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ):
	$(CC) -c $(SRC) -I includes

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
