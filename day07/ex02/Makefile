# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 22:28:35 by zwalad            #+#    #+#              #
#    Updated: 2022/12/07 02:57:04 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Array

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SOURCE := main.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE)  -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
