NAME = account
INC = -I ./
SRCS =	./tests.cpp \
		./Account.cpp

FLAGS = clang++  -g -fsanitize=address
all:
$(NAME):
	@$(FLAGS) $(INC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)