CXX = g++
FLAGS = -Wall -Wextra -Werror -std=c++11
NAME = loser

SRCS = main.cpp losers.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all