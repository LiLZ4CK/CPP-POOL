# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:18:54 by zwalad            #+#    #+#              #
#    Updated: 2022/12/02 01:40:18 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Base

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98 

RM = @rm -rf

SOURCE := main.cpp\
			Base.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all