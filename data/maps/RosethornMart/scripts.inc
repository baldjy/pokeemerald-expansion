RosethornMart_MapScripts::
	.byte 0


RosethornCity_Mart_EventScript_Clerk::
# 4 "data/maps/RosethornMart/scripts.pory"
	lock
# 5 "data/maps/RosethornMart/scripts.pory"
	faceplayer
# 6 "data/maps/RosethornMart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/RosethornMart/scripts.pory"
	waitmessage
# 8 "data/maps/RosethornMart/scripts.pory"
	pokemart MyMartTest
# 9 "data/maps/RosethornMart/scripts.pory"
	msgbox RosethornCity_Mart_EventScript_Clerk_Text_0
# 10 "data/maps/RosethornMart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/RosethornMart/scripts.pory"
MyMartTest:
# 15 "data/maps/RosethornMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/RosethornMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 17 "data/maps/RosethornMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NONE

RosethornCity_Mart_EventScript_Clerk_Text_0:
# 9 "data/maps/RosethornMart/scripts.pory"
	.string "Please come again!$"
