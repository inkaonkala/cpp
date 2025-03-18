CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++11
NAME = ABC

SRC = main.cpp data.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all