# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 12:00:53 by nnakarac          #+#    #+#              #
#    Updated: 2023/02/14 22:33:58 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = init-list

CC = c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

SRCS = init-list.cpp \
	main.cpp \

DBG = *.dSYM

all: $(NAME)

$(NAME):
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@printf "$(GREEN)    - $(NAME) Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME) $(DBG)
	@printf "$(YELLOW)    - $(NAME) Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME) $(DBG)
	@printf "$(YELLOW)    - $(NAME) Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean re fclean
