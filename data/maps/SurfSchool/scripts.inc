SurfSchool_MapScripts::
	.byte 0


TeachSurf::
# 4 "data/maps/SurfSchool/scripts.pory"
	lockall
# 5 "data/maps/SurfSchool/scripts.pory"
	showmoneybox 0, 0
# 6 "data/maps/SurfSchool/scripts.pory"
	msgbox TeachSurf_Text_0, MSGBOX_YESNO
# 7 "data/maps/SurfSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TeachSurf_2
TeachSurf_1:
# 27 "data/maps/SurfSchool/scripts.pory"
	releaseall
	return

TeachSurf_2:
# 8 "data/maps/SurfSchool/scripts.pory"
	checkmoney 100
# 9 "data/maps/SurfSchool/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TeachSurf_5
# 18 "data/maps/SurfSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TeachSurf_6
TeachSurf_4:
# 22 "data/maps/SurfSchool/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TeachSurf_9
	goto TeachSurf_1

TeachSurf_5:
# 10 "data/maps/SurfSchool/scripts.pory"
	removemoney 100
# 11 "data/maps/SurfSchool/scripts.pory"
	updatemoneybox
# 12 "data/maps/SurfSchool/scripts.pory"
	playse SE_SELECT
# 13 "data/maps/SurfSchool/scripts.pory"
	waitse
# 14 "data/maps/SurfSchool/scripts.pory"
	hidemoneybox
# 15 "data/maps/SurfSchool/scripts.pory"
	setvar VAR_0x8005, MOVE_SURF
# 16 "data/maps/SurfSchool/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	goto TeachSurf_4

TeachSurf_6:
# 19 "data/maps/SurfSchool/scripts.pory"
	hidemoneybox
# 20 "data/maps/SurfSchool/scripts.pory"
	msgbox TeachSurf_Text_1
	goto TeachSurf_4

TeachSurf_9:
# 23 "data/maps/SurfSchool/scripts.pory"
	msgbox TeachSurf_Text_2
# 24 "data/maps/SurfSchool/scripts.pory"
	releaseall
	goto TeachSurf_1


TeachSurf_Text_0:
# 6 "data/maps/SurfSchool/scripts.pory"
	.string "Do you want to teach SURF to a\n"
	.string "POKéMON?$"

TeachSurf_Text_1:
# 20 "data/maps/SurfSchool/scripts.pory"
	.string "More Gold is required$"

TeachSurf_Text_2:
# 23 "data/maps/SurfSchool/scripts.pory"
	.string "Please come again!$"
