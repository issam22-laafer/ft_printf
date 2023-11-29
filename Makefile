NAME = libftprintf.a

SRC = ft_putchar.c ft_printf.c ft_strchr.c ft_putnbr.c ft_putstr.c ft_print_hex.c ft_print_hex_u.c ft_print_u.c ft_print_hex_p.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all