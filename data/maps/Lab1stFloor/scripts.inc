Lab1stFloor_MapScripts::
	.byte 0


ReceptionTalk::
# 4 "data/maps/Lab1stFloor/scripts.pory"
	faceplayer
# 5 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 6 "data/maps/Lab1stFloor/scripts.pory"
	msgbox ReceptionTalk_Text_0
# 7 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


LabGossip::
# 12 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 13 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_0
# 14 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_1
# 15 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_2
# 16 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


ReceptionTalk_Text_0:
# 6 "data/maps/Lab1stFloor/scripts.pory"
	.string "You must be LEWIS's kid.\p"
	.string "If you're looking for your Dad you can\n"
	.string "go straight upstairs$"

LabGossip_Text_0:
# 13 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then, she came all the way towards\n"
	.string "me and said:\p"
	.string "WHAT ARE YOU LOOKING AT MISTER?$"

LabGossip_Text_1:
# 14 "data/maps/Lab1stFloor/scripts.pory"
	.string "Oh my godd...\p"
	.string "And then?$"

LabGossip_Text_2:
# 15 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then I woke up.\p"
	.string "That was a weird dream...$"
