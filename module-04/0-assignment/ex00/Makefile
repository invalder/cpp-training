# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 12:00:53 by nnakarac          #+#    #+#              #
#    Updated: 2023/03/18 21:06:04 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CC = c++ -g
CFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

SRCS = Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	main.cpp

DBG = *.dSYM

em:
ifdef exec
		@echo 'executin' $(exec)
		@$(CC) $(CFLAGS) "$(exec).cpp" -o $(exec)
endif
ifdef rm
		@echo 'removing' $(rm)
		@$(RM) $(rm) $(DBG)
endif

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
