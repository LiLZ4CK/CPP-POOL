# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 18:00:48 by zwalad            #+#    #+#              #
#    Updated: 2022/11/12 21:21:11 by zwalad           ###   ########.fr        #
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