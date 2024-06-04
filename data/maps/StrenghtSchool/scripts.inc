StrenghtSchool_MapScripts::
	.byte 0


TeachStrength::
# 4 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 5 "data/maps/StrenghtSchool/scripts.pory"
	showmoneybox 0, 0
# 6 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_0, MSGBOX_YESNO
# 7 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachStrength_2
TeachStrength_1:
# 27 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachStrength_2:
# 8 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 9 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachStrength_5
# 18 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachStrength_6
TeachStrength_4:
# 22 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachStrength_9
	goto TeachStrength_1

TeachStrength_5:
# 10 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 11 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 12 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SELECT
# 13 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 14 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 15 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_STRENGTH
# 16 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TeachStrength_4

TeachStrength_6:
# 19 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 20 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
	goto TeachStrength_4

TeachStrength_9:
# 23 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
# 24 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	goto TeachStrength_1


TeachCut::
# 31 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 32 "data/maps/StrenghtSchool/scripts.pory"
	showmoneybox 0, 0
# 33 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachCut_Text_0, MSGBOX_YESNO
# 34 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachCut_2
TeachCut_1:
# 54 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachCut_2:
# 35 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 36 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachCut_5
# 45 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachCut_6
TeachCut_4:
# 49 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachCut_9
	goto TeachCut_1

TeachCut_5:
# 37 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 38 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 39 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SELECT
# 40 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 41 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 42 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_CUT
# 43 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TeachCut_4

TeachCut_6:
# 46 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 47 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
	goto TeachCut_4

TeachCut_9:
# 50 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
# 51 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	goto TeachCut_1


TeachRockSmash::
# 58 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 59 "data/maps/StrenghtSchool/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachRockSmash_Text_0, MSGBOX_YESNO
# 61 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachRockSmash_2
TeachRockSmash_1:
# 81 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachRockSmash_2:
# 62 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 63 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachRockSmash_5
# 72 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachRockSmash_6
TeachRockSmash_4:
# 76 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachRockSmash_9
	goto TeachRockSmash_1

TeachRockSmash_5:
# 64 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 65 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 66 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SELECT
# 67 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 68 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 69 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SMASH
# 70 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TeachRockSmash_4

TeachRockSmash_6:
# 73 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 74 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
	goto TeachRockSmash_4

TeachRockSmash_9:
# 77 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
# 78 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	goto TeachRockSmash_1


MyStone::
# 85 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 86 "data/maps/StrenghtSchool/scripts.pory"
	msgbox MyStone_Text_0
# 87 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return


TeachStrength_Text_0:
# 6 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach STRENGTH to a\n"
	.string "POKéMON?$"

TeachStrength_Text_1:
# 20 "data/maps/StrenghtSchool/scripts.pory"
	.string "More Gold is required$"

TeachStrength_Text_2:
# 23 "data/maps/StrenghtSchool/scripts.pory"
	.string "Please come again!$"

TeachCut_Text_0:
# 33 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach CUT to a POKéMON?$"

TeachRockSmash_Text_0:
# 60 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach ROCK SMASH to a\n"
	.string "POKéMON?$"

MyStone_Text_0:
# 86 "data/maps/StrenghtSchool/scripts.pory"
	.string "I'm using that one!$"
