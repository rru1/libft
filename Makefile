NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -c
SRC		= *.c
OBJ		= *.o

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ):
	@gcc $(FLAG) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
