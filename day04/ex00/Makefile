# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoutawa <mmoutawa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/04 19:20:50 by mmoutawa          #+#    #+#              #
#    Updated: 2022/12/04 19:41:30 by mmoutawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all