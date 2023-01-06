# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 01:39:57 by zwalad            #+#    #+#              #
#    Updated: 2022/12/02 02:21:39 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Tmpl

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98 

RM = @rm -rf

SOURCE := main.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all