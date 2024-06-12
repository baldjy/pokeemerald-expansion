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
	return

WalkReception_1:
# 25 "data/maps/Lab1stFloor/scripts.pory"
	switch VAR_TEMP_1
# 26 "data/maps/Lab1stFloor/scripts.pory"
	case 1, WalkReception_5
# 28 "data/maps/Lab1stFloor/scripts.pory"
	case 2, WalkReception_6
# 30 "data/maps/Lab1stFloor/scripts.pory"
	case 3, WalkReception_7
# 32 "data/maps/Lab1stFloor/scripts.pory"
	case 4, WalkReception_8
WalkReception_3:
# 35 "data/maps/Lab1stFloor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 36 "data/maps/Lab1stFloor/scripts.pory"
	call ReceptionTalk
	return

WalkReception_5:
# 27 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab1
	goto WalkReception_3

WalkReception_6:
# 29 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab2
	goto WalkReception_3

WalkReception_7:
# 31 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab3
	goto WalkReception_3

WalkReception_8:
# 33 "data/maps/Lab1stFloor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveLab4
	goto WalkReception_3


ReceptionTalk::
# 40 "data/maps/Lab1stFloor/scripts.pory"
	faceplayer
# 41 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 42 "data/maps/Lab1stFloor/scripts.pory"
	msgbox ReceptionTalk_Text_0
# 43 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


LabGossip::
# 48 "data/maps/Lab1stFloor/scripts.pory"
	lockall
# 49 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_0
# 50 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_1
# 51 "data/maps/Lab1stFloor/scripts.pory"
	msgbox LabGossip_Text_2
# 52 "data/maps/Lab1stFloor/scripts.pory"
	releaseall
	end


# 55 "data/maps/Lab1stFloor/scripts.pory"
MoveLab1:
# 56 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 56 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 57 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 57 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 57 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 57 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 58 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 59 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 61 "data/maps/Lab1stFloor/scripts.pory"
MoveLab2:
# 62 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 63 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 63 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 63 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 64 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 65 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 67 "data/maps/Lab1stFloor/scripts.pory"
MoveLab3:
# 68 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 69 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 69 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 70 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 71 "data/maps/Lab1stFloor/scripts.pory"
	step_end

# 73 "data/maps/Lab1stFloor/scripts.pory"
MoveLab4:
# 74 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 74 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 75 "data/maps/Lab1stFloor/scripts.pory"
	walk_right
# 76 "data/maps/Lab1stFloor/scripts.pory"
	walk_up
# 77 "data/maps/Lab1stFloor/scripts.pory"
	step_end

ReceptionTalk_Text_0:
# 42 "data/maps/Lab1stFloor/scripts.pory"
	.string "You must be LEWIS's kid.\p"
	.string "If you're looking for your Dad you can\n"
	.string "go straight upstairs$"

LabGossip_Text_0:
# 49 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then, she came all the way towards\n"
	.string "me and said:\p"
	.string "WHAT ARE YOU LOOKING AT MISTER?$"

LabGossip_Text_1:
# 50 "data/maps/Lab1stFloor/scripts.pory"
	.string "Oh my god...\p"
	.string "And then?$"

LabGossip_Text_2:
# 51 "data/maps/Lab1stFloor/scripts.pory"
	.string "And then I woke up.\p"
	.string "That was a weird dream...$"
