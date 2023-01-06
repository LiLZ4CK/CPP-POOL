# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:57:35 by zwalad            #+#    #+#              #
#    Updated: 2022/11/10 13:00:21 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := Sed

CC := @c++ 

FLAGS := -Wall -Wextra -Werror -std=c++98

RM := @rm -rf

SOURCE := main.cpp\
			FtSed.cpp

all :  $(NAME)

$(NAME) : $(SOURCE)
	$(CC) $(SOURCE) -o $(NAME) $(FLAGS)

clean : 
	$(RM) $(NOTHING)

fclean : clean
	$(RM) $(NAME)

re : fclean all
