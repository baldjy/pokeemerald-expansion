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
# 24 "data/maps/StrenghtSchool/scripts.pory"
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
	msgbox TeachStrength_Text_2
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


TeachStrength_Text_0:
# 6 "data/maps/StrenghtSchool/scripts.pory"
	.string "Do you want to teach STRENGTH to a\n"
	.string "POKéMON?$"

TeachStrength_Text_1:
# 20 "data/maps/StrenghtSchool/scripts.pory"
	.string "More Gold is required$"

TeachStrength_Text_2:
# 22 "data/maps/StrenghtSchool/scripts.pory"
	.string "Please come again!$"
