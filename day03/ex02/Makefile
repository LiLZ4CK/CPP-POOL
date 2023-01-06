# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:35:05 by zwalad            #+#    #+#              #
#    Updated: 2022/10/27 21:38:12 by zwalad           ###   ########.fr        #
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
			
all : $(NAME)

$(NAME) : $(SOURCE)
	$(C+) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all