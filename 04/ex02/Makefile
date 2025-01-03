
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++11
NAME = VirtualTest

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brainz.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all