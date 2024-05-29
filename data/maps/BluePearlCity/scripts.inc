BluePearlCity_MapScripts::
	.byte 0


FisherTalk::
# 3 "data/maps/BluePearlCity/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 4 "data/maps/BluePearlCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FisherTalk_1
# 19 "data/maps/BluePearlCity/scripts.pory"
	faceplayer
# 20 "data/maps/BluePearlCity/scripts.pory"
	lockall
# 21 "data/maps/BluePearlCity/scripts.pory"
	msgbox FisherTalk_Text_2
# 22 "data/maps/BluePearlCity/scripts.pory"
	releaseall
	end

FisherTalk_1:
# 6 "data/maps/BluePearlCity/scripts.pory"
	faceplayer
# 7 "data/maps/BluePearlCity/scripts.pory"
	lockall
# 8 "data/maps/BluePearlCity/scripts.pory"
	msgbox FisherTalk_Text_0, MSGBOX_YESNO
# 9 "data/maps/BluePearlCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FisherTalk_5
# 14 "data/maps/BluePearlCity/scripts.pory"
	msgbox FisherTalk_Text_3
FisherTalk_4:
# 15 "data/maps/BluePearlCity/scripts.pory"
	releaseall
	end

FisherTalk_5:
# 10 "data/maps/BluePearlCity/scripts.pory"
	msgbox FisherTalk_Text_1
# 11 "data/maps/BluePearlCity/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 12 "data/maps/BluePearlCity/scripts.pory"
	msgbox FisherTalk_Text_2
	goto FisherTalk_4


SurfSchoolSign::
# 28 "data/maps/BluePearlCity/scripts.pory"
	lockall
# 29 "data/maps/BluePearlCity/scripts.pory"
	msgbox SurfSchoolSign_Text_0
# 30 "data/maps/BluePearlCity/scripts.pory"
	releaseall
	end


FisherTalk_Text_0:
# 8 "data/maps/BluePearlCity/scripts.pory"
	.string "Hey kid! You look like someone who\n"
	.string "wants to be the greatest, am I right?$"

FisherTalk_Text_1:
# 10 "data/maps/BluePearlCity/scripts.pory"
	.string "I KNEW IT!\p"
	.string "Take this and chase your greatest\n"
	.string "fisher dream!$"

FisherTalk_Text_2:
# 12 "data/maps/BluePearlCity/scripts.pory"
	.string "Now go for the big ones! Don't let'em\n"
	.string "waiting.$"

FisherTalk_Text_3:
# 14 "data/maps/BluePearlCity/scripts.pory"
	.string "Guess I was wrong...\p"
	.string "Let me know if you change your mind$"

SurfSchoolSign_Text_0:
# 29 "data/maps/BluePearlCity/scripts.pory"
	.string "Blue Pearl Surf School\n"
	.string "Kawabanga mah dudes!$"
