# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 17:32:06 by zwalad            #+#    #+#              #
#    Updated: 2022/11/15 18:29:03 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ClapTrap

C+ := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow

RM := @rm -rf

SOURCE := main.cpp\
			ClapTrap.cpp\
			
all : $(NAME)

$(NAME) : $(SOURCE)
	$(C+) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all