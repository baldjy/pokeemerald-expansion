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
	goto_if_eq TeachStrength_1
# 29 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachStrength_2
	return

TeachStrength_1:
# 8 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 9 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachStrength_5
# 24 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachStrength_6
	return

TeachStrength_2:
# 30 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 31 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 32 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachStrength_5:
# 10 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 11 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 12 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SHOP
# 13 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 14 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 15 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_STRENGTH
# 16 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 17 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TeachStrength_9
	return

TeachStrength_6:
# 25 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 26 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
	return

TeachStrength_9:
# 19 "data/maps/StrenghtSchool/scripts.pory"
	addmoney 100
# 20 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 21 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return


TeachCut::
# 37 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 38 "data/maps/StrenghtSchool/scripts.pory"
	showmoneybox 0, 0
# 39 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachCut_Text_0, MSGBOX_YESNO
# 40 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachCut_1
# 62 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachCut_2
	return

TeachCut_1:
# 41 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 42 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachCut_5
# 57 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachCut_6
	return

TeachCut_2:
# 63 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 64 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 65 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachCut_5:
# 43 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 44 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 45 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SHOP
# 46 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 47 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 48 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_CUT
# 49 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 50 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TeachCut_9
	return

TeachCut_6:
# 58 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 59 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
	return

TeachCut_9:
# 52 "data/maps/StrenghtSchool/scripts.pory"
	addmoney 100
# 53 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 54 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return


TeachRockSmash::
# 70 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 71 "data/maps/StrenghtSchool/scripts.pory"
	showmoneybox 0, 0
# 72 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachRockSmash_Text_0, MSGBOX_YESNO
# 73 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachRockSmash_1
# 95 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachRockSmash_2
	return

TeachRockSmash_1:
# 74 "data/maps/StrenghtSchool/scripts.pory"
	checkmoney 100
# 75 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachRockSmash_5
# 90 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachRockSmash_6
	return

TeachRockSmash_2:
# 96 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 97 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 98 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return

TeachRockSmash_5:
# 76 "data/maps/StrenghtSchool/scripts.pory"
	removemoney 100
# 77 "data/maps/StrenghtSchool/scripts.pory"
	updatemoneybox
# 78 "data/maps/StrenghtSchool/scripts.pory"
	playse SE_SHOP
# 79 "data/maps/StrenghtSchool/scripts.pory"
	waitse
# 80 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 81 "data/maps/StrenghtSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SMASH
# 82 "data/maps/StrenghtSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 83 "data/maps/StrenghtSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TeachRockSmash_9
	return

TeachRockSmash_6:
# 91 "data/maps/StrenghtSchool/scripts.pory"
	hidemoneybox
# 92 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_2
	return

TeachRockSmash_9:
# 85 "data/maps/StrenghtSchool/scripts.pory"
	addmoney 100
# 86 "data/maps/StrenghtSchool/scripts.pory"
	msgbox TeachStrength_Text_1
# 87 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return


MyStone::
# 103 "data/maps/StrenghtSchool/scripts.pory"
	lockall
# 104 "data/maps/StrenghtSchool/scripts.pory"
	msgbox MyStone_Text_0
# 105 "data/maps/StrenghtSchool/scripts.pory"
	releaseall
	return


TeachStrength_Text_0:
# 6 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach STRENGTH to a\n"
	.string "POKéMON?$"

TeachStrength_Text_1:
# 20 "data/maps/StrenghtSchool/scripts.pory"
	.string "Please come again!$"

TeachStrength_Text_2:
# 26 "data/maps/StrenghtSchool/scripts.pory"
	.string "More Gold is required$"

TeachCut_Text_0:
# 39 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach CUT to a POKéMON?$"

TeachRockSmash_Text_0:
# 72 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach ROCK SMASH to a\n"
	.string "POKéMON?$"

MyStone_Text_0:
# 104 "data/maps/StrenghtSchool/scripts.pory"
	.string "I'm using that one!$"
