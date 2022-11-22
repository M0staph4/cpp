# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 20:52:22 by mmoutawa          #+#    #+#              #
#    Updated: 2022/11/18 15:58:12 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp

	
all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all