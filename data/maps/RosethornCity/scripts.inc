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


BlockMove1_Text_0:
# 7 "data/maps/RosethornCity/scripts.pory"
	.string "These guys are blocking the road$"
