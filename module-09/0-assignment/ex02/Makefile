# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 12:00:53 by nnakarac          #+#    #+#              #
#    Updated: 2023/07/31 00:56:04 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC = c++
CFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++11 -fsanitize=address

RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

SRC_DIR = ./
OBJ_DIR = objs/
OBJS = $(SRCS:.cpp=.o)

SRCS = main.cpp \
	PmergeMe.cpp

DBG = *.dSYM

all: $(NAME)

em:
ifdef exec
		@echo 'executin' $(exec)
		@$(CC) $(CFLAGS) "$(exec).cpp" -o $(exec)
endif
ifdef rm
		@echo 'removing' $(rm)
		@$(RM) $(rm) $(DBG)
endif

$(NAME): $(addprefix $(OBJ_DIR),$(OBJS))
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) -g $(CFLAGS) $(addprefix $(OBJ_DIR),$(OBJS)) -o $(NAME)
	@printf "$(GREEN)    - $(NAME) Executable ready.\n$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< $(INCS) -o $@

clean:
	@$(RM) $(DBG) $(OBJ_DIR)
	@printf "$(YELLOW)    - $(NAME) Objects removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME) $(DBG)
	@printf "$(YELLOW)    - $(NAME) Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean re fclean
