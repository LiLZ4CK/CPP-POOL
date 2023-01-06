# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 17:33:36 by zwalad            #+#    #+#              #
#    Updated: 2022/12/09 19:14:45 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Eazy_E

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