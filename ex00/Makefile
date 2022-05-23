NAME = Animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
FSANITIZE = -fsanitize=address -g3
RM = rm -f

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(FSANITIZE) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./$(NAME)

.PHONY:	all clean fclean re test
