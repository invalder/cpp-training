# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 12:41:00 by nnakarac          #+#    #+#              #
#    Updated: 2023/02/16 13:00:55 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++ -g

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@say -v "Kanya" -r 500 "กำลังรวม"; printf "\033[1;32m" && echo "Compiling Objects" && printf "\033[0m"; sleep 0.5
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@printf "\033[1;32m" && echo "Done" && printf "\033[0m"

%.o: %.cpp
	@say -v "Kanya" -r 500 "กำลังคอมไพล์"; printf "\033[1;32m" && echo "Compiling $<" && printf "\033[0m"; sleep 0.5
	@$(CC) $(CFLAGS) -c $< -o $@
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

