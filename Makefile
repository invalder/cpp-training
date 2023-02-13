# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:40:39 by nnakarac          #+#    #+#              #
#    Updated: 2023/02/13 17:55:27 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NORM = norminette -R CheckForbiddenSourceHeaderDefine
UNAME = $(shell uname -s)
ARCH = $(shell arch)

MOD00_DIR = module-00/steams

remote:
	@find ./*/*/ -type d -exec make -C {} ';'

remote-clean:
	@find ./*/*/ -type d -exec make -C {} clean ';'

remote-re:
	@find ./*/*/ -type d -exec make -C {} re ';'

.PHONY: remote remote-clean remote-re
