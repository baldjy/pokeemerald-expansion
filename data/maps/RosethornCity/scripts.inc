RosethornCity_MapScripts::
	.byte 0


BlockMove1::
# 5 "data/maps/RosethornCity/scripts.pory"
	lockall
# 6 "data/maps/RosethornCity/scripts.pory"
	faceplayer
# 7 "data/maps/RosethornCity/scripts.pory"
	msgbox BlockMove1_Text_0
# 8 "data/maps/RosethornCity/scripts.pory"
	releaseall
	return


DontLeaveDad::
# 11 "data/maps/RosethornCity/scripts.pory"
	goto_if_unset DADDYTALK, DontLeaveDad_1
# 19 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end

DontLeaveDad_1:
# 12 "data/maps/RosethornCity/scripts.pory"
	msgbox DontLeaveDad_Text_0
# 13 "data/maps/RosethornCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 14 "data/maps/RosethornCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 15 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end


DontLeaveDad2::
# 25 "data/maps/RosethornCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, DontLeaveDad2_1
# 33 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end

DontLeaveDad2_1:
# 26 "data/maps/RosethornCity/scripts.pory"
	msgbox DontLeaveDad_Text_0
# 27 "data/maps/RosethornCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 28 "data/maps/RosethornCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 29 "data/maps/RosethornCity/scripts.pory"
	releaseall
	end


GiveFlyMon::
# 39 "data/maps/RosethornCity/scripts.pory"
	givemon SPECIES_PIDGEY, 5, , , , , , , , , , , , , , , , , , MOVE_FLY
	return


BlockMove1_Text_0:
# 7 "data/maps/RosethornCity/scripts.pory"
	.string "These guys are blocking the road$"

DontLeaveDad_Text_0:
# 12 "data/maps/RosethornCity/scripts.pory"
	.string "I should talk to Dad before going out\n"
	.string "there!$"
