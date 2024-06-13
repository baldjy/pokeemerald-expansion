Lab1stFloor_MapScripts::
	.byte 0


TriggerLab1::
# 4 "data/maps/Lab1stFloor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 5 "data/maps/Lab1stFloor/scripts.pory"
	call WalkReception
	return


TriggerLab2::
# 9 "data/maps/Lab1stFloor/scripts.pory"
	setvar VAR_TEMP_1, 2
# 10 "data/maps/Lab1stFloor/scripts.pory"
	call WalkReception
	return


TriggerLab3::
# 14 "data/maps/Lab1stFloor/scripts.pory"
	setvar VAR_TEMP_1, 3
# 15 "data/maps/Lab1stFloor/scripts.pory"
	call WalkReception
	return


TriggerLab4::
# 19 "data/maps/Lab1stFloor/scripts.pory"
	setvar VAR_TEMP_1, 4
# 20 "data/maps/Lab1stFloor/scripts.pory"
	call WalkReception
	return


WalkReception::
# 24 "data/maps/Lab1stFloor/scripts.pory"
	goto_if_unset DADDYTALK, WalkReception_1
# 39 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end

WalkReception_1:
# 25 "data/maps/Lab1stFloor/scripts.pory"
	switch VAR_TEMP_1
# 26 "data/maps/Lab1stFloor/scripts.pory"
	case 1, WalkReception_6
# 28 "data/maps/Lab1stFloor/scripts.pory"
	case 2, WalkReception_7
# 30 "data/maps/Lab1stFloor/scripts.pory"
	case 3, WalkReception_8
# 32 "data/maps/Lab1stFloor/scripts.pory"
	case 4, WalkReception_9
WalkReception_4:
# 35 "data/maps/Lab1stFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 36 "data/maps/Lab1stFloor/scripts.pory"
	call ReceptionTalk
	return

WalkReception_6:
# 27 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab1
	goto WalkReception_4

WalkReception_7:
# 29 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab2
	goto WalkReception_4

WalkReception_8:
# 31 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab3
	goto WalkReception_4

WalkReception_9:
# 33 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab4
	goto WalkReception_4


ReceptionTalk::
# 44 "data/maps/Lab1stFloor/scripts.pory"
	faceplayer
# 45 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 46 "data/maps/Lab1stFloor/scripts.pory"
	msgbox ReceptionTalk_Text_0
# 47 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


LabGossip::
# 52 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 53 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_0
# 54 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_1
# 55 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_2
# 56 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


# 59 "data/maps/Lab1stFloor/scripts.pory"
MoveLab1:
# 60 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 60 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 61 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 61 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 61 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 61 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 62 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 63 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 65 "data/maps/Lab1stFloor/scripts.pory"
MoveLab2:
# 66 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 67 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 67 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 67 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 68 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 69 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 71 "data/maps/Lab1stFloor/scripts.pory"
MoveLab3:
# 72 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 73 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 73 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 74 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 75 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 77 "data/maps/Lab1stFloor/scripts.pory"
MoveLab4:
# 78 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 78 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 79 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 80 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 81 "data/maps/Lab1stFloor/scripts.pory"
	step_end

ReceptionTalk_Text_0:
# 46 "data/maps/Lab1stFloor/scripts.pory"
	.string "You must be LEWIS's kid.\p"
	.string "If you're looking for your Dad you can\n"
	.string "go straight upstairs$"

LabGossip_Text_0:
# 53 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then, she came all the way towards\n"
	.string "me and said:\p"
	.string "WHAT ARE YOU LOOKING AT MISTER?$"

LabGossip_Text_1:
# 54 "data/maps/Lab1stFloor/scripts.pory"
	.string "Oh my god...\p"
	.string "And then?$"

LabGossip_Text_2:
# 55 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then I woke up.\p"
	.string "That was a weird dream...$"
