# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 19:52:48 by mmoutawa          #+#    #+#              #
#    Updated: 2023/01/05 20:08:48 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Main.cpp Serialization.cpp 
all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all