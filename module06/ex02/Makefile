# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 13:10:44 by lejulien          #+#    #+#              #
#    Updated: 2021/07/10 02:22:31 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	 	= ./main.cpp ./Base.cpp ./A.cpp ./B.cpp ./C.cpp

NAME		= a.out

FLAGS		= -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:.cpp=.o)

UNAME_S = $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	COMPILER = g++
endif
ifeq ($(UNAME_S),Darwin)
	COMPILER = clang++
endif

all:	$(NAME)

.PHONY:	clean fclean re

$(NAME):	$(OBJS)
	$(COMPILER) -o $(NAME) $(FLAGS) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.cpp.o:
	$(COMPILER) $(FLAGS) -c $<  -o $(<:.cpp=.o)
