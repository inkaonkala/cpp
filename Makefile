CC = g++
FLAGS = -Wall -Wextra -std=c++11

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = megaphone

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(FLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean