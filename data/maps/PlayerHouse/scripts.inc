PlayerHouse_MapScripts::
	.byte 0


DontLeaveMom::
# 4 "data/maps/PlayerHouse/scripts.pory"
	goto_if_unset MAMMATALK, DontLeaveMom_1
# 12 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end

DontLeaveMom_1:
# 5 "data/maps/PlayerHouse/scripts.pory"
	msgbox DontLeaveMom_Text_0
# 6 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestMove
# 7 "data/maps/PlayerHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 8 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end


MomTalk::
# 18 "data/maps/PlayerHouse/scripts.pory"
	goto_if_unset MAMMATALK, MomTalk_1
# 33 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 34 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 35 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_2
# 36 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end

MomTalk_1:
# 19 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 20 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 21 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_0
# 22 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/PlayerHouse/scripts.pory"
	message MomTalk_Text_1
# 24 "data/maps/PlayerHouse/scripts.pory"
	waitfanfare
# 25 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 26 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 27 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 28 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_2
# 29 "data/maps/PlayerHouse/scripts.pory"
	setflag MAMMATALK
# 30 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end


# 41 "data/maps/PlayerHouse/scripts.pory"
TestMove:
# 42 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 43 "data/maps/PlayerHouse/scripts.pory"
	step_end

DontLeaveMom_Text_0:
# 5 "data/maps/PlayerHouse/scripts.pory"
	.string "I should talk to mom before I leave$"

MomTalk_Text_0:
# 21 "data/maps/PlayerHouse/scripts.pory"
	.string "MOM: Hi dear! Your father just called.\p"
	.string "MOM: He asked me to tell you to meet him\n"
	.string "at the lab\p"
	.string "MOM: I am so glad we moved in here, your\n"
	.string "dad was very excited about his new\l"
	.string "research\p"
	.string "MOM: Oh I was about to gorget!\p"
	.string "MOM: Your Father and I Bought you this\n"
	.string "gift for you to celebrate our moving!$"

MomTalk_Text_1:
# 23 "data/maps/PlayerHouse/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

MomTalk_Text_2:
# 28 "data/maps/PlayerHouse/scripts.pory"
	.string "MOM: Now go on, don't leave your father\n"
	.string "waiting for so long!$"
