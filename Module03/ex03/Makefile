# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:38 by skelly            #+#    #+#              #
#    Updated: 2022/02/03 17:40:36 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap
HEADER		=	FragTrap.hpp ClapTrap.hpp DiamondTrap.hpp
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror  -Wshadow -std=c++98
SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp 
	@$(CXX) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re