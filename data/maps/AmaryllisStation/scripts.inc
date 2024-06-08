AmaryllisStation_MapScripts::
	.byte 0


AmaryllisStationCall::
# 3 "data/maps/AmaryllisStation/scripts.pory"
	showmoneybox 0, 0
# 4 "data/maps/AmaryllisStation/scripts.pory"
	message AmaryllisStationCall_Text_0
# 5 "data/maps/AmaryllisStation/scripts.pory"
	multichoice 25, 4, MULTI_CHOICE_STATION, 0
# 6 "data/maps/AmaryllisStation/scripts.pory"
	closemessage
# 7 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AmaryllisStationCall_2
AmaryllisStationCall_1:
# 26 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AmaryllisStationCall_5
AmaryllisStationCall_4:
# 44 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AmaryllisStationCall_11
	return

AmaryllisStationCall_2:
# 9 "data/maps/AmaryllisStation/scripts.pory"
	checkmoney 1000
# 10 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AmaryllisStationCall_7
# 20 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmaryllisStationCall_8
	goto AmaryllisStationCall_1

AmaryllisStationCall_5:
# 27 "data/maps/AmaryllisStation/scripts.pory"
	checkmoney 1000
# 28 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AmaryllisStationCall_13
# 38 "data/maps/AmaryllisStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AmaryllisStationCall_14
	goto AmaryllisStationCall_4

AmaryllisStationCall_7:
# 12 "data/maps/AmaryllisStation/scripts.pory"
	removemoney 1000
# 13 "data/maps/AmaryllisStation/scripts.pory"
	updatemoneybox
# 14 "data/maps/AmaryllisStation/scripts.pory"
	playse SE_SELECT
# 15 "data/maps/AmaryllisStation/scripts.pory"
	waitse
# 16 "data/maps/AmaryllisStation/scripts.pory"
	hidemoneybox
# 17 "data/maps/AmaryllisStation/scripts.pory"
	msgbox AmaryllisStationCall_Text_1
# 18 "data/maps/AmaryllisStation/scripts.pory"
	warp MAP_ROSETHORN_STATION, 16, 2
	goto AmaryllisStationCall_1

AmaryllisStationCall_8:
# 21 "data/maps/AmaryllisStation/scripts.pory"
	hidemoneybox
# 22 "data/maps/AmaryllisStation/scripts.pory"
	msgbox AmaryllisStationCall_Text_2
# 23 "data/maps/AmaryllisStation/scripts.pory"
	releaseall
	goto AmaryllisStationCall_1

AmaryllisStationCall_11:
# 46 "data/maps/AmaryllisStation/scripts.pory"
	hidemoneybox
# 47 "data/maps/AmaryllisStation/scripts.pory"
	msgbox AmaryllisStationCall_Text_3
# 48 "data/maps/AmaryllisStation/scripts.pory"
	releaseall
	return

AmaryllisStationCall_13:
# 30 "data/maps/AmaryllisStation/scripts.pory"
	removemoney 1000
# 31 "data/maps/AmaryllisStation/scripts.pory"
	updatemoneybox
# 32 "data/maps/AmaryllisStation/scripts.pory"
	playse SE_SELECT
# 33 "data/maps/AmaryllisStation/scripts.pory"
	waitse
# 34 "data/maps/AmaryllisStation/scripts.pory"
	hidemoneybox
# 35 "data/maps/AmaryllisStation/scripts.pory"
	msgbox AmaryllisStationCall_Text_1
# 36 "data/maps/AmaryllisStation/scripts.pory"
	warp MAP_GRANDPORT_STATION, 16, 2
	goto AmaryllisStationCall_4

AmaryllisStationCall_14:
# 39 "data/maps/AmaryllisStation/scripts.pory"
	hidemoneybox
# 40 "data/maps/AmaryllisStation/scripts.pory"
	msgbox AmaryllisStationCall_Text_2
# 41 "data/maps/AmaryllisStation/scripts.pory"
	releaseall
	goto AmaryllisStationCall_4


AmaryllisStationCall_Text_0:
# 4 "data/maps/AmaryllisStation/scripts.pory"
	.string "Welcome, where would you\nlike to travel?$"

AmaryllisStationCall_Text_1:
# 17 "data/maps/AmaryllisStation/scripts.pory"
	.string "Have safe travels!$"

AmaryllisStationCall_Text_2:
# 22 "data/maps/AmaryllisStation/scripts.pory"
	.string "More Gold is required$"

AmaryllisStationCall_Text_3:
# 47 "data/maps/AmaryllisStation/scripts.pory"
	.string "No need to travel there!$"
