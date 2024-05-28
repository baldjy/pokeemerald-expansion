BikeHouse_MapScripts::
	.byte 0


BikerTalk::
# 3 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 4 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_1
# 32 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 33 "data/maps/BikeHouse/scripts.pory"
	lockall
# 34 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 35 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_1:
# 6 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 7 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_4
# 24 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 25 "data/maps/BikeHouse/scripts.pory"
	lockall
# 26 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 27 "data/maps/BikeHouse/scripts.pory"
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
# 19 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_3
BikerTalk_7:
# 20 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_8:
# 13 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_1
# 14 "data/maps/BikeHouse/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 15 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 16 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_BIKETOOLBOX
# 17 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
	goto BikerTalk_7


ChangeBikes::
# 41 "data/maps/BikeHouse/scripts.pory"
	lockall
# 42 "data/maps/BikeHouse/scripts.pory"
	msgbox ChangeBikes_Text_0
# 43 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 44 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_2
ChangeBikes_1:
# 46 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 47 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_5
ChangeBikes_4:
# 49 "data/maps/BikeHouse/scripts.pory"
	release
	return

ChangeBikes_2:
# 45 "data/maps/BikeHouse/scripts.pory"
	call AcroToMach
	goto ChangeBikes_1

ChangeBikes_5:
# 48 "data/maps/BikeHouse/scripts.pory"
	call MachToAcro
	goto ChangeBikes_4


AcroToMach::
# 53 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 54 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 55 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


MachToAcro::
# 60 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 61 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 62 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


TestMoveTeach::
# 66 "data/maps/BikeHouse/scripts.pory"
	lockall
# 67 "data/maps/BikeHouse/scripts.pory"
	showmoneybox 0, 0
# 68 "data/maps/BikeHouse/scripts.pory"
	msgbox TestMoveTeach_Text_0, MSGBOX_YESNO
# 69 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestMoveTeach_2
TestMoveTeach_1:
# 85 "data/maps/BikeHouse/scripts.pory"
	releaseall
	return

TestMoveTeach_2:
# 70 "data/maps/BikeHouse/scripts.pory"
	checkmoney 100
# 71 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TestMoveTeach_4
# 80 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TestMoveTeach_5
	goto TestMoveTeach_1

TestMoveTeach_4:
# 72 "data/maps/BikeHouse/scripts.pory"
	removemoney 100
# 73 "data/maps/BikeHouse/scripts.pory"
	updatemoneybox
# 74 "data/maps/BikeHouse/scripts.pory"
	playse SE_SELECT
# 75 "data/maps/BikeHouse/scripts.pory"
	waitse
# 76 "data/maps/BikeHouse/scripts.pory"
	hidemoneybox
# 77 "data/maps/BikeHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SURF
# 78 "data/maps/BikeHouse/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TestMoveTeach_1

TestMoveTeach_5:
# 81 "data/maps/BikeHouse/scripts.pory"
	hidemoneybox
# 82 "data/maps/BikeHouse/scripts.pory"
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
# 17 "data/maps/BikeHouse/scripts.pory"
	.string "Now go for the big roads! Don't let'em\n"
	.string "waiting.$"

BikerTalk_Text_3:
# 19 "data/maps/BikeHouse/scripts.pory"
	.string "Guess I was wrong...\p"
	.string "Let me know if you change your mind$"

ChangeBikes_Text_0:
# 42 "data/maps/BikeHouse/scripts.pory"
	.string "Let's work on my bike$"

TestMoveTeach_Text_0:
# 68 "data/maps/BikeHouse/scripts.pory"
	.string "Do you want to teach SURF to a\n"
	.string "POKéMON?$"

TestMoveTeach_Text_1:
# 82 "data/maps/BikeHouse/scripts.pory"
	.string "More Gold is required$"
