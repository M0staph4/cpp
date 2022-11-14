NAME = Zombie
CC = c++ 
CFLAGS = -Wall -Wextra -Werror 
SRC = main.cpp seter_geter.cpp Zombie.cpp zombieHorde.cpp
	

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all