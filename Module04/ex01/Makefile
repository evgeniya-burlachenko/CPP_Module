# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:38 by skelly            #+#    #+#              #
#    Updated: 2022/02/16 00:04:09 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain
HEADER		=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp 
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror  -Wshadow -std=c++98
SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	$(CXX) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJ) $(HEADER) Makefile
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re