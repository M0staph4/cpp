# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 21:15:22 by mmoutawa          #+#    #+#              #
#    Updated: 2022/11/30 23:04:59 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all