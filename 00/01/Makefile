XX = g++
FLAGS = -Wall -Wextra -std=c++11

SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = PhoneBook

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