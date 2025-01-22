NAME = sedIsForLosers
CC = c++
C_FLAGS = -Wall -Werror -Wextra

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

customclean: fclean
	rm -f *.replace

re: fclean all

.PHONY: all clean fclean customclean re
