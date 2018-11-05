NAME = libft.a
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): putchar putstr strcmp strlen swap
	ar -rc $(NAME) *.o

putchar:
	gcc $(FLAG) -c includes/ft_putchar.c

putstr:
	gcc $(FLAG) -c includes/ft_putstr.c

strcmp:
	gcc $(FLAG) -c includes/ft_strcmp.c

strlen:
	gcc $(FLAG) -c includes/ft_strlen.c	

swap:
	gcc $(FLAG) -c includes/ft_swap.c

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
