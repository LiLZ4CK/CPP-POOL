# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 01:31:44 by zwalad            #+#    #+#              #
#    Updated: 2022/11/16 22:22:32 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ScavTrap

C+ := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98
RM := rm -rf

SOURCE := main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\
			
all : $(NAME)

$(NAME) : $(SOURCE)
	$(C+) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all