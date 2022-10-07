# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 18:15:35 by aionescu          #+#    #+#              #
#    Updated: 2022/07/07 16:25:16 by aionescu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = CPP05_ex02

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

all: $(NAME)

$(NAME):
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)
	rm -f *.o
	chmod a+x $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
