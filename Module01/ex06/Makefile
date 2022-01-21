# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:38 by skelly            #+#    #+#              #
#    Updated: 2022/01/21 23:19:16 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	karenFilter
HEADER		=	Karen.hpp 
CXX			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
SRCS		=	main.cpp Karen.cpp
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