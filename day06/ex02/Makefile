# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 22:43:52 by mmoutawa          #+#    #+#              #
#    Updated: 2023/01/05 23:40:27 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Main.cpp Base.cpp 
all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all