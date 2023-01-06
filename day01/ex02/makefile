# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 22:23:47 by zwalad            #+#    #+#              #
#    Updated: 2022/11/09 22:43:28 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Brain

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\

all : $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean :
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all
