# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 13:10:44 by lejulien          #+#    #+#              #
#    Updated: 2021/07/09 03:50:06 by lejulien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	 	= ./main.cpp ./Data.cpp 

NAME		= a.out

FLAGS		= -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:.cpp=.o)

all:	$(NAME)

.PHONY:	clean fclean re

$(NAME):	$(OBJS)
	clang++ -o $(NAME) $(FLAGS) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.cpp.o:
	clang++ $(FLAGS) -c $<  -o $(<:.cpp=.o)
