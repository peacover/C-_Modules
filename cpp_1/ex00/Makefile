NAME = zombie
INC = -I ./
SRCS =	./main.cpp \
		./Zombie.cpp \
		./newZombie.cpp \
		./randomChump.cpp

FLAGS = clang++ -Wall -Wextra -Werror -g -fsanitize=address
all: $(NAME)
$(NAME):
	@$(FLAGS) $(INC) $(SRCS) -o $(NAME) $(LIBFT)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)