NAME = megaphone
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

# This is a minimal set of ANSI/VT100 color codes
_END=$'\x1b[0m'
_BOLD=$'\x1b[1m'

# Colors
_RED=$'\x1b[31m'
_GREEN=$'\x1b[32m'
_CYAN=$'\x1b[36m'


all : $(NAME)
$(NAME): $(SRC)
	@echo "${_BOLD}${_GREEN}---------Minishell Compilation---------${_END}"
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)
clean:
	@echo "${_BOLD}${_RED}---------Cleaning Objects---------${_END}"
	rm -rf $(OBJ)
fclean: clean
	@echo "${_BOLD}${_RED}---------Deleting---------${_END}"
	rm -rf $(NAME)

re: fclean all