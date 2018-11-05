NAME = ft_display_file
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): intermediate
	gcc $(FLAG) main.o -o $(NAME)

intermediate:
	gcc -c $(FLAG) main.c

clean:
	rm *.o

fclean:
	rm $(NAME)
