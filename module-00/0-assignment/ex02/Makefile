# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 12:41:00 by nnakarac          #+#    #+#              #
#    Updated: 2023/02/18 12:55:25 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARCH = $(shell arch)
NAME = account

SRCS = Account.cpp \
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -g

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

ifeq ($(ARCH), arm64)
	LDFLAGS	= -L${HOMEBREW_PREFIX}/opt/readline/lib
	CPPFLAGS	= -I${HOMEBREW_PREFIX}/opt/readline/include
else
	LDFLAGS	= -L/usr/local/opt/readline/lib
	CPPFLAGS	= -I/usr/local/opt/readline/include
endif

all: $(NAME)

$(NAME): $(OBJS)
	@say -v "Kanya" -r 500 "กำลังรวม"; printf "\033[1;32m" && echo "Compiling Objects" && printf "\033[0m"; sleep 0.5
	@$(CC) $(CFLAGS) $(CPPFLAGS) -lreadline $(LDFLAGS) -o $(NAME) $(OBJS)
	@printf "\033[1;32m" && echo "Done" && printf "\033[0m"

%.o: %.cpp
	@say -v "Kanya" -r 500 "กำลังคอมไพล์"; printf "\033[1;32m" && echo "Compiling $<" && printf "\033[0m"; sleep 0.5
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
	@printf "\033[1;32m" && echo "Done" && printf "\033[0m"

clean:
	@say -v "Kanya" -r 500 "กำลังลบออพเจค"; printf "\033[1;31m" && echo "Cleaning Objects" && printf "\033[0m"; sleep 0.5
	@$(RM) $(OBJS)
	@printf "\033[1;31m" && echo "Done" && printf "\033[0m"

fclean: clean
	@say -v "Kanya" -r 500 "กำลังลบไฟล์"; printf "\033[1;31m" && echo "Cleaning $(NAME)" && printf "\033[0m"; sleep 0.5
	@$(RM) $(NAME)
	@printf "\033[1;31m" && echo "Done" && printf "\033[0m"

re: fclean all

.PHONY: all clean fclean re

