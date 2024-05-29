BikeHouse_MapScripts::
	.byte 0


BikerTalk::
# 3 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 4 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_1
# 33 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 34 "data/maps/BikeHouse/scripts.pory"
	lockall
# 35 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 36 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_1:
# 6 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 7 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_4
# 25 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 26 "data/maps/BikeHouse/scripts.pory"
	lockall
# 27 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 28 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_4:
# 9 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 10 "data/maps/BikeHouse/scripts.pory"
	lockall
# 11 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_0, MSGBOX_YESNO
# 12 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BikerTalk_8
# 20 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_3
BikerTalk_7:
# 21 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_8:
# 13 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_1
# 14 "data/maps/BikeHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 15 "data/maps/BikeHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 16 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 17 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_BIKETOOLBOX
# 18 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
	goto BikerTalk_7


ChangeBikes::
# 42 "data/maps/BikeHouse/scripts.pory"
	lockall
# 43 "data/maps/BikeHouse/scripts.pory"
	msgbox ChangeBikes_Text_0
# 44 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 45 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_2
ChangeBikes_1:
# 47 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 48 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_5
ChangeBikes_4:
# 50 "data/maps/BikeHouse/scripts.pory"
	release
	return

ChangeBikes_2:
# 46 "data/maps/BikeHouse/scripts.pory"
	call AcroToMach
	goto ChangeBikes_1

ChangeBikes_5:
# 49 "data/maps/BikeHouse/scripts.pory"
	call MachToAcro
	goto ChangeBikes_4


AcroToMach::
# 54 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 55 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 56 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


MachToAcro::
# 61 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 62 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 63 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


TestMoveTeach::
# 67 "data/maps/BikeHouse/scripts.pory"
	lockall
# 68 "data/maps/BikeHouse/scripts.pory"
	showmoneybox 0, 0
# 69 "data/maps/BikeHouse/scripts.pory"
	msgbox TestMoveTeach_Text_0, MSGBOX_YESNO
# 70 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestMoveTeach_2
TestMoveTeach_1:
# 86 "data/maps/BikeHouse/scripts.pory"
	releaseall
	return

TestMoveTeach_2:
# 71 "data/maps/BikeHouse/scripts.pory"
	checkmoney 100
# 72 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TestMoveTeach_4
# 81 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TestMoveTeach_5
	goto TestMoveTeach_1

TestMoveTeach_4:
# 73 "data/maps/BikeHouse/scripts.pory"
	removemoney 100
# 74 "data/maps/BikeHouse/scripts.pory"
	updatemoneybox
# 75 "data/maps/BikeHouse/scripts.pory"
	playse SE_SELECT
# 76 "data/maps/BikeHouse/scripts.pory"
	waitse
# 77 "data/maps/BikeHouse/scripts.pory"
	hidemoneybox
# 78 "data/maps/BikeHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SURF
# 79 "data/maps/BikeHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TestMoveTeach_1

TestMoveTeach_5:
# 82 "data/maps/BikeHouse/scripts.pory"
	hidemoneybox
# 83 "data/maps/BikeHouse/scripts.pory"
	msgbox TestMoveTeach_Text_1
	goto TestMoveTeach_1


BikerTalk_Text_0:
# 11 "data/maps/BikeHouse/scripts.pory"
	.string "Hey kid! You look like someone who\n"
	.string "wants to be the greatest, am I right?$"

BikerTalk_Text_1:
# 13 "data/maps/BikeHouse/scripts.pory"
	.string "I KNEW IT!\p"
	.string "Take this and chase your greatest rider\n"
	.string "dream!$"

BikerTalk_Text_2:
# 18 "data/maps/BikeHouse/scripts.pory"
	.string "Now go for the big roads! Don't let'em\n"
	.string "waiting.$"

BikerTalk_Text_3:
# 20 "data/maps/BikeHouse/scripts.pory"
	.string "Guess I was wrong...\p"
	.string "Let me know if you change your mind$"

ChangeBikes_Text_0:
# 43 "data/maps/BikeHouse/scripts.pory"
	.string "Let's work on my bike$"

TestMoveTeach_Text_0:
# 69 "data/maps/BikeHouse/scripts.pory"
	.string "Do you want to teach SURF to a\n"
	.string "POKéMON?$"

TestMoveTeach_Text_1:
# 83 "data/maps/BikeHouse/scripts.pory"
	.string "More Gold is required$"
