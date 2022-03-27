# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:38 by skelly            #+#    #+#              #
#    Updated: 2022/02/15 19:25:13 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	interface
HEADER		=	AMateria.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Character.hpp Ice.hpp Cure.hpp
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp AMateria.cpp MateriaSource.cpp Character.cpp Ice.cpp Cure.cpp
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