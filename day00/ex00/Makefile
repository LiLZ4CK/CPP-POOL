# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 18:56:55 by zwalad            #+#    #+#              #
#    Updated: 2022/10/26 14:45:44 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := megaphone.cpp

all:  $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean:
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all