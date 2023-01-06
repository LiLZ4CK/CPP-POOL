# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 21:24:43 by zwalad            #+#    #+#              #
#    Updated: 2022/11/21 20:46:26 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Bureaucrat

CC := @c++

FLAGS := -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SOURCE := main.cpp\
			Bureaucrat.cpp\

all: $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) $(FLAGS) -o $(NAME)

clean: 
	$(RM) $(NOTHING)

fclean: clean
	$(RM) $(NAME)

re: fclean all
