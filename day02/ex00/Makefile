# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 21:37:38 by zwalad            #+#    #+#              #
#    Updated: 2022/11/10 21:40:36 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Fixed

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			Fixed.cpp\

all : $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean :
		$(RM) $(NOTHING)

fclean : clean 
	$(RM) $(NAME)

re : fclean all