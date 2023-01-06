# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 20:08:07 by zwalad            #+#    #+#              #
#    Updated: 2022/11/09 22:43:31 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := Human

CC := @c++ 

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\

all :  $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all