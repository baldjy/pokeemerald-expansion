RosethornStation_MapScripts::
	.byte 0


RoseThornStationCall::
# 3 "data/maps/RosethornStation/scripts.pory"
	message RoseThornStationCall_Text_0
# 4 "data/maps/RosethornStation/scripts.pory"
	multichoice 25, 4, MULTI_CHOICE_STATION, 0
# 5 "data/maps/RosethornStation/scripts.pory"
	closemessage
# 6 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RoseThornStationCall_2
RoseThornStationCall_1:
# 11 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RoseThornStationCall_5
RoseThornStationCall_4:
# 16 "data/maps/RosethornStation/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RoseThornStationCall_7
	return

RoseThornStationCall_2:
# 8 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_1
# 9 "data/maps/RosethornStation/scripts.pory"
	warp MAP_ROSETHORN_STATION, 16, 2
	goto RoseThornStationCall_1

RoseThornStationCall_5:
# 13 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_1
# 14 "data/maps/RosethornStation/scripts.pory"
	warp MAP_GRANDPORT_STATION, 16, 2
	goto RoseThornStationCall_4

RoseThornStationCall_7:
# 18 "data/maps/RosethornStation/scripts.pory"
	msgbox RoseThornStationCall_Text_1
# 19 "data/maps/RosethornStation/scripts.pory"
	warp MAP_AMARYLLIS_STATION, 16, 2
	return


RoseThornStationCall_Text_0:
# 3 "data/maps/RosethornStation/scripts.pory"
	.string "Welcome, where would you\nlike to travel?$"

RoseThornStationCall_Text_1:
# 8 "data/maps/RosethornStation/scripts.pory"
	.string "Have safe travels!$"
