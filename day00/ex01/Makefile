# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 18:06:36 by zwalad            #+#    #+#              #
#    Updated: 2022/10/26 14:45:48 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Phonebook

CC := @g++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SOURCE := main.cpp\
			PhoneBook.cpp\
			Contact.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
