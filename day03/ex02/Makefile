# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 21:15:22 by mmoutawa          #+#    #+#              #
#    Updated: 2022/11/29 23:08:49 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ClapTrap.cpp

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all