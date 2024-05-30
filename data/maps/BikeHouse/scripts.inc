BikeHouse_MapScripts::
	.byte 0


BikerTalk::
# 3 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 4 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_1
# 31 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 32 "data/maps/BikeHouse/scripts.pory"
	lockall
# 33 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 34 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_1:
# 6 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 7 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BikerTalk_4
# 23 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 24 "data/maps/BikeHouse/scripts.pory"
	lockall
# 25 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
# 26 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_4:
# 9 "data/maps/BikeHouse/scripts.pory"
	faceplayer
# 10 "data/maps/BikeHouse/scripts.pory"
	lockall
# 11 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_0, MSGBOX_YESNO
# 12 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BikerTalk_8
# 18 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_3
BikerTalk_7:
# 19 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end

BikerTalk_8:
# 13 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_1
# 14 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 15 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_BIKETOOLBOX
# 16 "data/maps/BikeHouse/scripts.pory"
	msgbox BikerTalk_Text_2
	goto BikerTalk_7


ChangeBikes::
# 40 "data/maps/BikeHouse/scripts.pory"
	lockall
# 41 "data/maps/BikeHouse/scripts.pory"
	msgbox ChangeBikes_Text_0
# 42 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 43 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_2
ChangeBikes_1:
# 45 "data/maps/BikeHouse/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 46 "data/maps/BikeHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ChangeBikes_5
ChangeBikes_4:
# 48 "data/maps/BikeHouse/scripts.pory"
	release
	return

ChangeBikes_2:
# 44 "data/maps/BikeHouse/scripts.pory"
	call AcroToMach
	goto ChangeBikes_1

ChangeBikes_5:
# 47 "data/maps/BikeHouse/scripts.pory"
	call MachToAcro
	goto ChangeBikes_4


AcroToMach::
# 51 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 52 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 53 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


MachToAcro::
# 57 "data/maps/BikeHouse/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 58 "data/maps/BikeHouse/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 59 "data/maps/BikeHouse/scripts.pory"
	releaseall
	end


BikerTalk_Text_0:
# 11 "data/maps/BikeHouse/scripts.pory"
	.string "Hey kid! You look like someone who\n"
	.string "wants to be the greatest, am I right?$"

BikerTalk_Text_1:
# 13 "data/maps/BikeHouse/scripts.pory"
	.string "I KNEW IT!\p"
	.string "Take this and chase your greatest rider\n"
	.string "dream!$"

BikerTalk_Text_2:
# 16 "data/maps/BikeHouse/scripts.pory"
	.string "Now go for the big roads! Don't let'em\n"
	.string "waiting.$"

BikerTalk_Text_3:
# 18 "data/maps/BikeHouse/scripts.pory"
	.string "Guess I was wrong...\p"
	.string "Let me know if you change your mind$"

ChangeBikes_Text_0:
# 41 "data/maps/BikeHouse/scripts.pory"
	.string "Let's work on my bike$"
