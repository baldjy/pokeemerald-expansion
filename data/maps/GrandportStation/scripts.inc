GrandportStation_MapScripts::
	.byte 0


GrandportStationCall::
# 3 "data/maps/GrandportStation/scripts.pory"
	showmoneybox 0, 0
# 4 "data/maps/GrandportStation/scripts.pory"
	message GrandportStationCall_Text_0
# 5 "data/maps/GrandportStation/scripts.pory"
	multichoice 25, 4, MULTI_CHOICE_STATION, 0
# 6 "data/maps/GrandportStation/scripts.pory"
	closemessage
# 7 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GrandportStationCall_2
GrandportStationCall_1:
# 26 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GrandportStationCall_5
GrandportStationCall_4:
# 31 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GrandportStationCall_11
	return

GrandportStationCall_2:
# 9 "data/maps/GrandportStation/scripts.pory"
	checkmoney 1000
# 10 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandportStationCall_7
# 20 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GrandportStationCall_8
	goto GrandportStationCall_1

GrandportStationCall_5:
# 27 "data/maps/GrandportStation/scripts.pory"
	hidemoneybox
# 28 "data/maps/GrandportStation/scripts.pory"
	msgbox GrandportStationCall_Text_3
# 29 "data/maps/GrandportStation/scripts.pory"
	releaseall
	goto GrandportStationCall_4

GrandportStationCall_7:
# 12 "data/maps/GrandportStation/scripts.pory"
	removemoney 1000
# 13 "data/maps/GrandportStation/scripts.pory"
	updatemoneybox
# 14 "data/maps/GrandportStation/scripts.pory"
	playse SE_SELECT
# 15 "data/maps/GrandportStation/scripts.pory"
	waitse
# 16 "data/maps/GrandportStation/scripts.pory"
	hidemoneybox
# 17 "data/maps/GrandportStation/scripts.pory"
	msgbox GrandportStationCall_Text_1
# 18 "data/maps/GrandportStation/scripts.pory"
	warp MAP_ROSETHORN_STATION, 16, 2
	goto GrandportStationCall_1

GrandportStationCall_8:
# 21 "data/maps/GrandportStation/scripts.pory"
	hidemoneybox
# 22 "data/maps/GrandportStation/scripts.pory"
	msgbox GrandportStationCall_Text_2
# 23 "data/maps/GrandportStation/scripts.pory"
	releaseall
	goto GrandportStationCall_1

GrandportStationCall_11:
# 33 "data/maps/GrandportStation/scripts.pory"
	checkmoney 1000
# 34 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GrandportStationCall_13
# 44 "data/maps/GrandportStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GrandportStationCall_14
	return

GrandportStationCall_13:
# 36 "data/maps/GrandportStation/scripts.pory"
	removemoney 1000
# 37 "data/maps/GrandportStation/scripts.pory"
	updatemoneybox
# 38 "data/maps/GrandportStation/scripts.pory"
	playse SE_SELECT
# 39 "data/maps/GrandportStation/scripts.pory"
	waitse
# 40 "data/maps/GrandportStation/scripts.pory"
	hidemoneybox
# 41 "data/maps/GrandportStation/scripts.pory"
	msgbox GrandportStationCall_Text_1
# 42 "data/maps/GrandportStation/scripts.pory"
	warp MAP_AMARYLLIS_STATION, 16, 2
	return

GrandportStationCall_14:
# 45 "data/maps/GrandportStation/scripts.pory"
	hidemoneybox
# 46 "data/maps/GrandportStation/scripts.pory"
	msgbox GrandportStationCall_Text_2
# 47 "data/maps/GrandportStation/scripts.pory"
	releaseall
	return


GrandportStationCall_Text_0:
# 4 "data/maps/GrandportStation/scripts.pory"
	.string "Welcome, where would you\nlike to travel?$"

GrandportStationCall_Text_1:
# 17 "data/maps/GrandportStation/scripts.pory"
	.string "Have safe travels!$"

GrandportStationCall_Text_2:
# 22 "data/maps/GrandportStation/scripts.pory"
	.string "More Gold is required$"

GrandportStationCall_Text_3:
# 28 "data/maps/GrandportStation/scripts.pory"
	.string "No need to travel there!$"
