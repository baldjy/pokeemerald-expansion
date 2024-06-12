RosethornStation_MapScripts::
	.byte 0


RoseThornStationCall::
# 3 "data/maps/RosethornStation/scripts.pory"
	showmoneybox 0, 0
# 5 "data/maps/RosethornStation/scripts.pory"
	message RoseThornStationCall_Text_0
# 6 "data/maps/RosethornStation/scripts.pory"
	multichoice 25, 4, MULTI_CHOICE_STATION, 0
# 7 "data/maps/RosethornStation/scripts.pory"
	closemessage
# 8 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RoseThornStationCall_2
RoseThornStationCall_1:
# 14 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RoseThornStationCall_5
RoseThornStationCall_4:
# 32 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RoseThornStationCall_7
# 52 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 53 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_4
# 54 "data/maps/RosethornStation/scripts.pory"
	releaseall
	return

RoseThornStationCall_2:
# 10 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 11 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_1
# 12 "data/maps/RosethornStation/scripts.pory"
	releaseall
	goto RoseThornStationCall_1

RoseThornStationCall_5:
# 15 "data/maps/RosethornStation/scripts.pory"
	checkmoney 1000
# 16 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RoseThornStationCall_10
# 26 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RoseThornStationCall_11
	goto RoseThornStationCall_4

RoseThornStationCall_7:
# 34 "data/maps/RosethornStation/scripts.pory"
	checkmoney 1000
# 35 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RoseThornStationCall_14
# 45 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RoseThornStationCall_15
	return

RoseThornStationCall_10:
# 18 "data/maps/RosethornStation/scripts.pory"
	removemoney 1000
# 19 "data/maps/RosethornStation/scripts.pory"
	updatemoneybox
# 20 "data/maps/RosethornStation/scripts.pory"
	playse SE_SELECT
# 21 "data/maps/RosethornStation/scripts.pory"
	waitse
# 22 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 23 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_2
# 24 "data/maps/RosethornStation/scripts.pory"
	warp MAP_GRANDPORT_STATION, 16, 2
	goto RoseThornStationCall_4

RoseThornStationCall_11:
# 27 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 28 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_3
# 29 "data/maps/RosethornStation/scripts.pory"
	releaseall
	goto RoseThornStationCall_4

RoseThornStationCall_14:
# 37 "data/maps/RosethornStation/scripts.pory"
	removemoney 1000
# 38 "data/maps/RosethornStation/scripts.pory"
	updatemoneybox
# 39 "data/maps/RosethornStation/scripts.pory"
	playse SE_SELECT
# 40 "data/maps/RosethornStation/scripts.pory"
	waitse
# 41 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 42 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_2
# 43 "data/maps/RosethornStation/scripts.pory"
	warp MAP_AMARYLLIS_STATION, 16, 2
	return

RoseThornStationCall_15:
# 46 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 47 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_3
# 48 "data/maps/RosethornStation/scripts.pory"
	releaseall
	return


RoseThornStationCall_Text_0:
# 5 "data/maps/RosethornStation/scripts.pory"
	.string "Welcome, where would you\nlike to travel?$"

RoseThornStationCall_Text_1:
# 11 "data/maps/RosethornStation/scripts.pory"
	.string "No need to travel there!$"

RoseThornStationCall_Text_2:
# 23 "data/maps/RosethornStation/scripts.pory"
	.string "Have safe travels!$"

RoseThornStationCall_Text_3:
# 28 "data/maps/RosethornStation/scripts.pory"
	.string "More Gold is required$"

RoseThornStationCall_Text_4:
# 53 "data/maps/RosethornStation/scripts.pory"
	.string "We cannot travel there now$"
