# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 01:37:25 by mmoutawa          #+#    #+#              #
#    Updated: 2022/10/18 22:26:17 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++ 
CFLAGS = -Wall -Wextra -Werror 
SRC = megaphone.cpp

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all