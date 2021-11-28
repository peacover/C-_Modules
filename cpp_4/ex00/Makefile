NAME = main
INC = -I ./
SRCS =	./main.cpp \
		./animal.cpp \
		./dog.cpp \
		./cat.cpp

FLAGS = clang++ -Wall -Wextra -Werror -g -fsanitize=address
all: $(NAME)
$(NAME):
	@$(FLAGS) $ $(SRCS) -o $(NAME) $(LIBFT)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)