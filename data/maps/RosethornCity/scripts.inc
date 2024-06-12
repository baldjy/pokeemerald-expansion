RosethornCity_MapScripts::
# 2 "data/maps/RosethornCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetFlyFlagRosethorn
	.byte 0


SetFlyFlagRosethorn::
# 6 "data/maps/RosethornCity/scripts.pory"
	setflag FLAG_VISITED_ROSETHORN_CITY
	return


BlockMove1::
# 10 "data/maps/RosethornCity/scripts.pory"
	lockall
# 11 "data/maps/RosethornCity/scripts.pory"
	faceplayer
# 12 "data/maps/RosethornCity/scripts.pory"
	msgbox BlockMove1_Text_0
# 13 "data/maps/RosethornCity/scripts.pory"
	releaseall
	return


DontLeaveDad::
# 16 "data/maps/RosethornCity/scripts.pory"
	goto_if_unset DADDYTALK, DontLeaveDad_1
# 24 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end

DontLeaveDad_1:
# 17 "data/maps/RosethornCity/scripts.pory"
	msgbox DontLeaveDad_Text_0
# 18 "data/maps/RosethornCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 19 "data/maps/RosethornCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 20 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end


DontLeaveDad2::
# 30 "data/maps/RosethornCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DontLeaveDad2_1
# 38 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end

DontLeaveDad2_1:
# 31 "data/maps/RosethornCity/scripts.pory"
	msgbox DontLeaveDad_Text_0
# 32 "data/maps/RosethornCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 33 "data/maps/RosethornCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end


GiveFlyMon::
# 44 "data/maps/RosethornCity/scripts.pory"
	givemon SPECIES_PIDGEY, 5, , , , , , , , , , , , , , , , , , MOVE_FLY
# 45 "data/maps/RosethornCity/scripts.pory"
	waitfanfare
# 46 "data/maps/RosethornCity/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 47 "data/maps/RosethornCity/scripts.pory"
	call NicknamePartyMon
# 48 "data/maps/RosethornCity/scripts.pory"
	releaseall
	return


BlockMove1_Text_0:
# 12 "data/maps/RosethornCity/scripts.pory"
	.string "These guys are blocking the road$"

DontLeaveDad_Text_0:
# 17 "data/maps/RosethornCity/scripts.pory"
	.string "I should talk to Dad before going out\n"
	.string "there!$"
