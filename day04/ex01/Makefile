# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 23:06:40 by zwalad            #+#    #+#              #
#    Updated: 2022/11/20 02:23:19 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := Animal

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98 

RM = @rm -rf

SOURCE := main.cpp\
			Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			Brain.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
