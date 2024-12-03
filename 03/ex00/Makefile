CXX = g++
FLAGS = -Wall -Wextra -Werror -std=c++11
NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclesn: clean
	rm -f $(NAME)

re: fclean all