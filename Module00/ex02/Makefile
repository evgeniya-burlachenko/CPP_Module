# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:38 by skelly            #+#    #+#              #
#    Updated: 2022/01/18 20:03:57 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Account
HEADER		=	Account.hpp 
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS		=	Account.cpp tests.cpp
OBJ			=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADER)
	@$(CXX) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re