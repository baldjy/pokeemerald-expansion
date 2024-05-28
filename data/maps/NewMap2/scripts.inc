NewMap2_MapScripts::
	.byte 0


Littleroot_NewMap2_EventScript_Anabel::
# 4 "data/maps/NewMap2/scripts.pory"
	lock
# 5 "data/maps/NewMap2/scripts.pory"
	faceplayer
# 6 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ANABELGYM, Littleroot_NewMap2_EventScript_Anabel_2
# 17 "data/maps/NewMap2/scripts.pory"
	msgbox LittlerootTown_Gym_Text_AnabelPostBattle
Littleroot_NewMap2_EventScript_Anabel_1:
# 19 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 20 "data/maps/NewMap2/scripts.pory"
	releaseall
	end

Littleroot_NewMap2_EventScript_Anabel_2:
# 7 "data/maps/NewMap2/scripts.pory"
	switch VAR_BADGENUMBER_STATE
# 8 "data/maps/NewMap2/scripts.pory"
	case 0, Littleroot_NewMap2_EventScript_Anabel_6
# 10 "data/maps/NewMap2/scripts.pory"
	case 1, Littleroot_NewMap2_EventScript_Anabel_7
# 12 "data/maps/NewMap2/scripts.pory"
	case 2, Littleroot_NewMap2_EventScript_Anabel_8
	goto Littleroot_NewMap2_EventScript_Anabel_1

Littleroot_NewMap2_EventScript_Anabel_6:
# 9 "data/maps/NewMap2/scripts.pory"
	call LittlerootTown_Gym_EventScript_AnabelNoBadges
	goto Littleroot_NewMap2_EventScript_Anabel_1

Littleroot_NewMap2_EventScript_Anabel_7:
# 11 "data/maps/NewMap2/scripts.pory"
	call LittlerootTown_Gym_EventScript_AnabelOneBadge
	goto Littleroot_NewMap2_EventScript_Anabel_1

Littleroot_NewMap2_EventScript_Anabel_8:
# 13 "data/maps/NewMap2/scripts.pory"
	call LittlerootTown_Gym_EventScript_AnabelTwoBadges
	goto Littleroot_NewMap2_EventScript_Anabel_1


LittlerootTown_Gym_EventScript_AnabelNoBadges::
# 27 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, FirstGym_AnabelIntro, FirstGym_AnabelDefeat, FirstGym_EventScript_AnabelDefeated, NO_MUSIC
# 28 "data/maps/NewMap2/scripts.pory"
	msgbox LittlerootTown_Gym_Text_AnabelPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 30 "data/maps/NewMap2/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_AnabelOneBadge::
# 36 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, SecondGym_AnabelIntro, SecondGym_Text_AnabelDefeat, SecondGym_EventScript_AnabelDefeated, NO_MUSIC
# 37 "data/maps/NewMap2/scripts.pory"
	msgbox LittlerootTown_Gym_Text_AnabelPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 39 "data/maps/NewMap2/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_AnabelTwoBadges::
# 45 "data/maps/NewMap2/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_TREECKO, ThirdGym_AnabelIntro, ThirdGym_AnabelDefeat, ThirdGym_EventScript_AnabelDefeated, NO_MUSIC
# 46 "data/maps/NewMap2/scripts.pory"
	msgbox LittlerootTown_Gym_Text_AnabelPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 48 "data/maps/NewMap2/scripts.pory"
	release
	end


FirstGym_EventScript_AnabelDefeated::
# 57 "data/maps/NewMap2/scripts.pory"
	message FirstGym_Text_ReceivedAnabelBadge
# 58 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 59 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 60 "data/maps/NewMap2/scripts.pory"
	msgbox ( AnabelGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 61 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_DEFEATED_ANABELGYM
# 62 "data/maps/NewMap2/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 63 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 64 "data/maps/NewMap2/scripts.pory"
	waitmessage
	end


SecondGym_EventScript_AnabelDefeated::
# 75 "data/maps/NewMap2/scripts.pory"
	message SecondGym_Text_ReceivedAnabelBadge
# 76 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 77 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 78 "data/maps/NewMap2/scripts.pory"
	msgbox ( AnabelGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 79 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_DEFEATED_ANABELGYM
# 80 "data/maps/NewMap2/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 81 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 82 "data/maps/NewMap2/scripts.pory"
	waitmessage
	end


ThirdGym_EventScript_AnabelDefeated::
# 93 "data/maps/NewMap2/scripts.pory"
	message ThirdGym_Text_ReceivedAnabelBadge
# 94 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 95 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/NewMap2/scripts.pory"
	msgbox ( AnabelGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 97 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_DEFEATED_ANABELGYM
# 98 "data/maps/NewMap2/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 99 "data/maps/NewMap2/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/NewMap2/scripts.pory"
	waitmessage
	end


FirstGym_Text_ReceivedAnabelBadge::
# 69 "data/maps/NewMap2/scripts.pory"
	.string "{PLAYER} received their first badge!$"

SecondGym_Text_ReceivedAnabelBadge::
# 87 "data/maps/NewMap2/scripts.pory"
	.string "{PLAYER} received their second badge!$"

ThirdGym_Text_ReceivedAnabelBadge::
# 105 "data/maps/NewMap2/scripts.pory"
	.string "{PLAYER} received their third badge!$"

FirstGym_AnabelIntro::
# 111 "data/maps/NewMap2/scripts.pory"
	.string "I'm Anabel, and this is your first challenge.$"

FirstGym_AnabelDefeat::
# 115 "data/maps/NewMap2/scripts.pory"
	.string "You got potential!$"

SecondGym_AnabelIntro::
# 119 "data/maps/NewMap2/scripts.pory"
	.string "You already defeated one gym leader, huh?$"

SecondGym_Text_AnabelDefeat::
# 123 "data/maps/NewMap2/scripts.pory"
	.string "That makes it two, huh?$"

ThirdGym_AnabelIntro::
# 127 "data/maps/NewMap2/scripts.pory"
	.string "I'm not holding back!$"

ThirdGym_AnabelDefeat::
# 131 "data/maps/NewMap2/scripts.pory"
	.string "Congratulations!$"

AnabelGym_Text_BadgeInfoTakeThis::
# 135 "data/maps/NewMap2/scripts.pory"
	.string "This badge is proof of your strength.$"

LittlerootTown_Gym_Text_AnabelPostBattle::
# 139 "data/maps/NewMap2/scripts.pory"
	.string "Good luck moving forward.$"
