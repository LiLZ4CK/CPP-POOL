# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:03:31 by zwalad            #+#    #+#              #
#    Updated: 2022/11/15 18:29:44 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ScavTrap

C+ := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			
all : $(NAME)

$(NAME) : $(SOURCE)
	$(C+) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all