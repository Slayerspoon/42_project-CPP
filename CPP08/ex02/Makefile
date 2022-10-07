# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 21:35:31 by aionescu          #+#    #+#              #
#    Updated: 2022/08/15 21:36:11 by aionescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CPP08_ex02

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
