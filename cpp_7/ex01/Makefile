# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 16:12:36 by yer-raki          #+#    #+#              #
#    Updated: 2022/02/06 16:12:38 by yer-raki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
INC = -I ./
SRCS =	./main.cpp 

FLAGS = clang++ -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(SRCS)
	@$(FLAGS) $(INC) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf *.dSYM
re : fclean $(NAME)