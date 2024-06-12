PlayerRoom_MapScripts::
# 2 "data/maps/PlayerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RunningShoes
	.byte 0


RunningShoes::
# 6 "data/maps/PlayerRoom/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 7 "data/maps/PlayerRoom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 8 "data/maps/PlayerRoom/scripts.pory"
	setrespawn HEAL_LOCATION_ROSETHORN_CITY
	return

