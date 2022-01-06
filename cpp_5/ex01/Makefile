# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 16:28:17 by yer-raki          #+#    #+#              #
#    Updated: 2022/01/06 09:25:02 by yer-raki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
INC = -I ./
SRCS =	./main.cpp \
		./Bureaucrat.cpp \
		./Form.cpp

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