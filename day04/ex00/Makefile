# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 11:19:37 by zwalad            #+#    #+#              #
#    Updated: 2022/11/18 17:49:40 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Animal

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SOURCE := main.cpp\
			Animal.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\
			Cat.cpp\
			Dog.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
