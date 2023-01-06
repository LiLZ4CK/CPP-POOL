# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 18:51:29 by zwalad            #+#    #+#              #
#    Updated: 2022/11/29 18:51:47 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Data

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SOURCE := main.cpp\
			Data.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all