NAME = Bureaucrat
CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
	 PresidentialPardonForm.cpp Intern.cpp

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all