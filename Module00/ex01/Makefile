NAME		=	PhoneBook
HEADER		=	phonebook.hpp contact.hpp
CXX			=	g++ 
CFLAGS		=	-Wall -Wextra -Werror
SRCS		=	phonebook.cpp contact.cpp main.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	@$(CXX) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) Makefile
	@$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re