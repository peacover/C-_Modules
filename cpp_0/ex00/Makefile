NAME = megaphone
INC = -I ./
SRCS =	./megaphone.cpp

FLAGS = clang++ -Wall -Wextra -Werror
all: $(NAME)
$(NAME):
	@$(FLAGS) $(INC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)