# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 21:19:54 by aionescu          #+#    #+#              #
#    Updated: 2022/07/27 21:43:31 by aionescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CPP07_ex02

SRC = main.cpp

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
	rm -f *.o
	chmod a+x $(NAME)
	say "Beep boop beep boop, compilation successful!"

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
