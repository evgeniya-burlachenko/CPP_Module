# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 09:03:23 by skelly            #+#    #+#              #
#    Updated: 2022/01/18 09:03:24 by skelly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CXX			=	g++ 
CFLAGS		=	-Wall -Wextra -Werror 
SRCS		=	megaphone.cpp
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
