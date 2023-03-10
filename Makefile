# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnakarac <nnakarac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:40:39 by nnakarac          #+#    #+#              #
#    Updated: 2023/02/18 16:08:02 by nnakarac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NORM = norminette -R CheckForbiddenSourceHeaderDefine
UNAME = $(shell uname -s)
ARCH = $(shell arch)

ifeq ($(UNAME), Linux)
	MEME = aplay easter_egg/meme2.mp3 &
	ANYA = aplay easter_egg/anya.mp3 &
	SPONSOR = aplay easter_egg/sponsor.mp3 &
	TIEIN = aplay easter_egg/tir_in.wav &
else
	MEME = afplay easter_egg/meme2.mp3 -v 0.3 &
	ANYA = afplay easter_egg/anya.mp3 -v 0.7 &
	SPONSOR = afplay easter_egg/sponsor.mp3 -v 0.7 &
	TIEIN = afplay easter_egg/tie_in.wav -v 0.7 &
endif

MEME2 = say -v kanya "กำลังรัน นอร์มิเน็ตโตะ" &
MEME4 = say -v kanya "กำลังรัน MAKE RE" &
ANYA2 = say -v kanya "วากุ วากุ" &
SPONSOR2 = say -v kanya -r 0.8 "เอ่อ โค้ดนี้ก็ เขียนเองนะครับ    แก้  เขียน  ครบ    จบในที่เดียว ยังไงก็ให้ผ่านนะครับ ผมจะได้ไปต่อ" &
SPONSOR4 = say -v kanya -r 20 "เอ่อ โค้ดนี้ก็ ทำเองนะครับ" &
SPONSOR5 = say -v kanya -r 10 "เขียน  บั๊ก  ครบ    จบในที่เดียว" &
SPONSOR6 = say -v kanya -r 40 "มีบั๊กทุกบรรทัดแหละครับ    ไม่ต้องคิดมาก" &
SPONSOR7 = say -v kanya -r 20 "ให้ผ่านเถอะครับ ผมจะได้ไปต่อ" &

MEME3 = ./easter_egg/credits.sh
ANYA3 = ./easter_egg/anya.sh
SPONSOR3 = ./easter_egg/sponsor.sh

MOD00_DIR = module-00/steams

remote:
	@find ./module*/*/ -type d -exec make -C {} ';'

remote-clean:
	@find ./module*/*/ -type d -exec make -C {} clean ';'

remote-fclean:
	@find ./module*/*/ -type d -exec make -C {} fclean ';'

remote-re:
	@find ./module*/*/ -type d -exec make -C {} re ';'

credits:
	@$(MEME)
	@$(MEME3)

anya:
	@$(ANYA3)
	@$(ANYA)
	@$(ANYA2)

sponsor:
	@$(SPONSOR3)
	@$(SPONSOR)
	@sleep 2
	@$(SPONSOR4)
	@sleep 5
	@$(SPONSOR5)
	@sleep 6
	@$(SPONSOR6)
	@sleep 6
	@$(SPONSOR7)

.PHONY: remote remote-clean remote-re credits anya sponsor
