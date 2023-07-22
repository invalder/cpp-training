# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:40:39 by nnakarac          #+#    #+#              #
#    Updated: 2023/07/16 01:26:31 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NORM = norminette -R CheckForbiddenSourceHeaderDefine
UNAME = $(shell uname -s)
ARCH = $(shell arch)

ifeq ($(UNAME), Linux)
	BEGIN = aplay easter_egg/tense-intrigue-cut.mp3 &
else
	BEGIN = afplay easter_egg/tense-intrigue-cut.mp3 -v 0.3 &
endif

MEME2 = say -v kanya "กำลังรัน นอร์มิเน็ตโตะ" &
MEME4 = say -v kanya "กำลังรัน MAKE RE" &
ANYA2 = say -v kanya "วากุ วากุ" &
SPONSOR2 = say -v kanya -r 0.8 "เอ่อ โค้ดนี้ก็ เขียนเองนะครับ    แก้  เขียน  ครบ    จบในที่เดียว ยังไงก็ให้ผ่านนะครับ ผมจะได้ไปต่อ" &
SPONSOR4 = say -v kanya -r 20 "เอ่อ โค้ดนี้ก็ ทำเองนะครับ" &
SPONSOR5 = say -v kanya -r 10 "เขียน  บั๊ก  ครบ    จบในที่เดียว" &
SPONSOR6 = say -v kanya -r 40 "มีบั๊กทุกบรรทัดแหละครับ    ไม่ต้องคิดมาก" &
SPONSOR7 = say -v kanya -r 20 "ให้ผ่านเถอะครับ ผมจะได้ไปต่อ" &

BEGIN2 = ./easter_egg/Robot.sh

ROLL = ./easter_egg/Roll.sh

remote:
	@find ./ex*/ -type d -exec make -C {} ';'

remote-clean:
	@find ./ex*/ -type d -exec make -C {} clean ';'

remote-fclean:
	@find ./ex*/ -type d -exec make -C {} fclean ';'

remote-re:
	@find ./ex*/ -type d -exec make -C {} re ';'

remote-run:
	@find ./ex* -perm -u=x -type f -exec {} $(ARGS) ';'

credits:
	@$(BEGIN)
	@$(BEGIN2)

rolls:
	@$(ROLL)

.PHONY: remote remote-clean remote-re credits anya sponsor
