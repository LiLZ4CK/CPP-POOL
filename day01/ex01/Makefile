# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 18:07:31 by zwalad            #+#    #+#              #
#    Updated: 2022/11/09 22:43:23 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Horde

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

all : $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean :
		$(RM) $(NOTHING)

fclean : clean 
	$(RM) $(NAME)

re : fclean all