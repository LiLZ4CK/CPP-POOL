# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 18:51:31 by zwalad            #+#    #+#              #
#    Updated: 2022/11/09 22:44:00 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Filter

CC := @c++ 

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			Harl.cpp\

all :  $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all