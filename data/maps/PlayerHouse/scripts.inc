PlayerHouse_MapScripts::
	.byte 0


Trigger1::
# 6 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/PlayerHouse/scripts.pory"
	call DontLeaveMom
	return


Trigger2::
# 11 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_TEMP_1, 2
# 12 "data/maps/PlayerHouse/scripts.pory"
	call DontLeaveMom
	return


Trigger3::
# 16 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_TEMP_1, 3
# 17 "data/maps/PlayerHouse/scripts.pory"
	call DontLeaveMom
	return


Trigger4::
# 21 "data/maps/PlayerHouse/scripts.pory"
	setvar VAR_TEMP_1, 4
# 22 "data/maps/PlayerHouse/scripts.pory"
	call DontLeaveMom
	return


DontLeaveMom::
# 26 "data/maps/PlayerHouse/scripts.pory"
	goto_if_unset MAMMATALK, DontLeaveMom_1
# 49 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	return

DontLeaveMom_1:
# 27 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 28 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/PlayerHouse/scripts.pory"
	msgbox DontLeaveMom_Text_0
# 30 "data/maps/PlayerHouse/scripts.pory"
	releaseall
# 31 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 32 "data/maps/PlayerHouse/scripts.pory"
	switch VAR_TEMP_1
# 33 "data/maps/PlayerHouse/scripts.pory"
	case 1, DontLeaveMom_6
# 35 "data/maps/PlayerHouse/scripts.pory"
	case 2, DontLeaveMom_7
# 37 "data/maps/PlayerHouse/scripts.pory"
	case 3, DontLeaveMom_8
# 39 "data/maps/PlayerHouse/scripts.pory"
	case 4, DontLeaveMom_9
DontLeaveMom_4:
# 42 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveTrigger1
# 43 "data/maps/PlayerHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 45 "data/maps/PlayerHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 46 "data/maps/PlayerHouse/scripts.pory"
	call MomTalk
	return

DontLeaveMom_6:
# 34 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveTrigger1
	goto DontLeaveMom_4

DontLeaveMom_7:
# 36 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveTrigger2
	goto DontLeaveMom_4

DontLeaveMom_8:
# 38 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveTrigger3
	goto DontLeaveMom_4

DontLeaveMom_9:
# 40 "data/maps/PlayerHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveTrigger4
	goto DontLeaveMom_4


MomTalk::
# 54 "data/maps/PlayerHouse/scripts.pory"
	goto_if_unset MAMMATALK, MomTalk_1
# 68 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 69 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 70 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_2
# 71 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end

MomTalk_1:
# 55 "data/maps/PlayerHouse/scripts.pory"
	faceplayer
# 56 "data/maps/PlayerHouse/scripts.pory"
	lockall
# 57 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_0
# 58 "data/maps/PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/PlayerHouse/scripts.pory"
	message MomTalk_Text_1
# 60 "data/maps/PlayerHouse/scripts.pory"
	waitfanfare
# 61 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 62 "data/maps/PlayerHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 63 "data/maps/PlayerHouse/scripts.pory"
	msgbox MomTalk_Text_2
# 64 "data/maps/PlayerHouse/scripts.pory"
	setflag MAMMATALK
# 65 "data/maps/PlayerHouse/scripts.pory"
	releaseall
	end


# 76 "data/maps/PlayerHouse/scripts.pory"
MoveTrigger1:
# 77 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 77 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 78 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 78 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 78 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 79 "data/maps/PlayerHouse/scripts.pory"
	walk_down
# 80 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 80 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 80 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 81 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 81 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 81 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 82 "data/maps/PlayerHouse/scripts.pory"
	step_end

# 84 "data/maps/PlayerHouse/scripts.pory"
MoveTrigger2:
# 85 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 86 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 86 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 87 "data/maps/PlayerHouse/scripts.pory"
	walk_down
# 88 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 88 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 88 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 89 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 89 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 89 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 90 "data/maps/PlayerHouse/scripts.pory"
	step_end

# 92 "data/maps/PlayerHouse/scripts.pory"
MoveTrigger3:
# 93 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 94 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 94 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 95 "data/maps/PlayerHouse/scripts.pory"
	step_end

# 97 "data/maps/PlayerHouse/scripts.pory"
MoveTrigger4:
# 98 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 99 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 99 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 99 "data/maps/PlayerHouse/scripts.pory"
	walk_right
# 100 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 100 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 100 "data/maps/PlayerHouse/scripts.pory"
	walk_up
# 101 "data/maps/PlayerHouse/scripts.pory"
	step_end

DontLeaveMom_Text_0:
# 29 "data/maps/PlayerHouse/scripts.pory"
	.string "MOM: Honey, before you leave, can you\n"
	.string "come here for a second?$"

MomTalk_Text_0:
# 57 "data/maps/PlayerHouse/scripts.pory"
	.string "MOM: Hi dear! Your father just called.\p"
	.string "MOM: He asked me to tell you to meet him\n"
	.string "at the lab\p"
	.string "MOM: I am so glad we moved in here, your\n"
	.string "dad was very excited about his new\l"
	.string "research\p"
	.string "MOM: Oh I was about to forget!\p"
	.string "MOM: Your Father and I Bought you this\n"
	.string "gift for you to celebrate our moving!$"

MomTalk_Text_1:
# 59 "data/maps/PlayerHouse/scripts.pory"
	.string "{PLAYER} received the POKéNAV!$"

MomTalk_Text_2:
# 63 "data/maps/PlayerHouse/scripts.pory"
	.string "MOM: Now go on, don't leave your father\n"
	.string "waiting for so long!$"
