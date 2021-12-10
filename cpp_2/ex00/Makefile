NAME = a.out
INC = -I ./
SRCS =	./main.cpp \
		./Fixed.cpp

FLAGS = clang++ -Wall -Wextra -Werror 
all: $(NAME)
$(NAME):
	@$(FLAGS) $(INC) $(SRCS) -o $(NAME) $(LIBFT)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)