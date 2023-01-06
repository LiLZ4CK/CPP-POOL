# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 14:44:52 by zwalad            #+#    #+#              #
#    Updated: 2022/11/02 23:22:43 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := account

CC := @g++

FLAGS := -Wall -Wextra -Werror  -std=c++98

RM = @rm -rf

SOURCE := tests.cpp\
			Account.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
