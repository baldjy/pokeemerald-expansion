RosethornStation_MapScripts::
	.byte 0


RoseThornStationCall::
# 3 "data/maps/RosethornStation/scripts.pory"
	showmoneybox 0, 0
# 4 "data/maps/RosethornStation/scripts.pory"
	message RoseThornStationCall_Text_0
# 5 "data/maps/RosethornStation/scripts.pory"
	multichoice 25, 4, MULTI_CHOICE_STATION, 0
# 6 "data/maps/RosethornStation/scripts.pory"
	closemessage
# 7 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RoseThornStationCall_2
RoseThornStationCall_1:
# 13 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RoseThornStationCall_5
RoseThornStationCall_4:
# 31 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RoseThornStationCall_7
	return

RoseThornStationCall_2:
# 9 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 10 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_1
# 11 "data/maps/RosethornStation/scripts.pory"
	releaseall
	goto RoseThornStationCall_1

RoseThornStationCall_5:
# 14 "data/maps/RosethornStation/scripts.pory"
	checkmoney 1000
# 15 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RoseThornStationCall_9
# 25 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RoseThornStationCall_10
	goto RoseThornStationCall_4

RoseThornStationCall_7:
# 33 "data/maps/RosethornStation/scripts.pory"
	checkmoney 1000
# 34 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RoseThornStationCall_13
# 44 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RoseThornStationCall_14
	return

RoseThornStationCall_9:
# 17 "data/maps/RosethornStation/scripts.pory"
	removemoney 1000
# 18 "data/maps/RosethornStation/scripts.pory"
	updatemoneybox
# 19 "data/maps/RosethornStation/scripts.pory"
	playse SE_SELECT
# 20 "data/maps/RosethornStation/scripts.pory"
	waitse
# 21 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 22 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_2
# 23 "data/maps/RosethornStation/scripts.pory"
	warp MAP_GRANDPORT_STATION, 16, 2
	goto RoseThornStationCall_4

RoseThornStationCall_10:
# 26 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 27 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_3
# 28 "data/maps/RosethornStation/scripts.pory"
	releaseall
	goto RoseThornStationCall_4

RoseThornStationCall_13:
# 36 "data/maps/RosethornStation/scripts.pory"
	removemoney 1000
# 37 "data/maps/RosethornStation/scripts.pory"
	updatemoneybox
# 38 "data/maps/RosethornStation/scripts.pory"
	playse SE_SELECT
# 39 "data/maps/RosethornStation/scripts.pory"
	waitse
# 40 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 41 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_2
# 42 "data/maps/RosethornStation/scripts.pory"
	warp MAP_AMARYLLIS_STATION, 16, 2
	return

RoseThornStationCall_14:
# 45 "data/maps/RosethornStation/scripts.pory"
	hidemoneybox
# 46 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_3
# 47 "data/maps/RosethornStation/scripts.pory"
	releaseall
	return


RoseThornStationCall_Text_0:
# 4 "data/maps/RosethornStation/scripts.pory"
	.string "Welcome, where would you\nlike to travel?$"

RoseThornStationCall_Text_1:
# 10 "data/maps/RosethornStation/scripts.pory"
	.string "No need to travel there!$"

RoseThornStationCall_Text_2:
# 22 "data/maps/RosethornStation/scripts.pory"
	.string "Have safe travels!$"

RoseThornStationCall_Text_3:
# 27 "data/maps/RosethornStation/scripts.pory"
	.string "More Gold is required$"
