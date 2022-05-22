NAME = AMateria
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SANITIZE = -fsanitize=address -g3
RM = rm -f

SRC = AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(SANITIZE) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

leaks: re
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)
	./$(NAME)

test: re
	$(re) ./$(NAME)

san: fclean 
	$(fclean)
	$(CC) $(CFLAGS) $(SANITIZE) $(MAIN) $(SRC) -o $(NAME)
	./$(NAME)

.PHONY:	all clean fclean re test
