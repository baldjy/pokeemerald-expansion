NewMap3_MapScripts::
	.byte 0


Littleroot_NewMap3_EventScript_Steven::
# 4 "data/maps/NewMap3/scripts.pory"
	lock
# 5 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 6 "data/maps/NewMap3/scripts.pory"
	goto_if_unset FLAG_DEFEATED_STEVENGYM, Littleroot_NewMap3_EventScript_Steven_2
# 17 "data/maps/NewMap3/scripts.pory"
	msgbox LittlerootTown_Gym_Text_StevenPostBattle
Littleroot_NewMap3_EventScript_Steven_1:
# 19 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 20 "data/maps/NewMap3/scripts.pory"
	releaseall
	end

Littleroot_NewMap3_EventScript_Steven_2:
# 7 "data/maps/NewMap3/scripts.pory"
	switch VAR_BADGENUMBER_STATE
# 8 "data/maps/NewMap3/scripts.pory"
	case 0, Littleroot_NewMap3_EventScript_Steven_6
# 10 "data/maps/NewMap3/scripts.pory"
	case 1, Littleroot_NewMap3_EventScript_Steven_7
# 12 "data/maps/NewMap3/scripts.pory"
	case 2, Littleroot_NewMap3_EventScript_Steven_8
	goto Littleroot_NewMap3_EventScript_Steven_1

Littleroot_NewMap3_EventScript_Steven_6:
# 9 "data/maps/NewMap3/scripts.pory"
	call LittlerootTown_Gym_EventScript_StevenNoBadges
	goto Littleroot_NewMap3_EventScript_Steven_1

Littleroot_NewMap3_EventScript_Steven_7:
# 11 "data/maps/NewMap3/scripts.pory"
	call LittlerootTown_Gym_EventScript_StevenOneBadge
	goto Littleroot_NewMap3_EventScript_Steven_1

Littleroot_NewMap3_EventScript_Steven_8:
# 13 "data/maps/NewMap3/scripts.pory"
	call LittlerootTown_Gym_EventScript_StevenTwoBadges
	goto Littleroot_NewMap3_EventScript_Steven_1


LittlerootTown_Gym_EventScript_StevenNoBadges::
# 27 "data/maps/NewMap3/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, FirstGym_StevenIntro, FirstGym_StevenDefeat, FirstGym_EventScript_StevenDefeated, NO_MUSIC
# 28 "data/maps/NewMap3/scripts.pory"
	msgbox LittlerootTown_Gym_Text_StevenPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 30 "data/maps/NewMap3/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_StevenOneBadge::
# 36 "data/maps/NewMap3/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, SecondGym_StevenIntro, SecondGym_Text_StevenDefeat, SecondGym_EventScript_StevenDefeated, NO_MUSIC
# 37 "data/maps/NewMap3/scripts.pory"
	msgbox LittlerootTown_Gym_Text_StevenPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 39 "data/maps/NewMap3/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_StevenTwoBadges::
# 45 "data/maps/NewMap3/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, ThirdGym_StevenIntro, ThirdGym_StevenDefeat, ThirdGym_EventScript_StevenDefeated, NO_MUSIC
# 46 "data/maps/NewMap3/scripts.pory"
	msgbox LittlerootTown_Gym_Text_StevenPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 48 "data/maps/NewMap3/scripts.pory"
	release
	end


FirstGym_EventScript_StevenDefeated::
# 57 "data/maps/NewMap3/scripts.pory"
	message FirstGym_Text_ReceivedStevenBadge
# 58 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 59 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 60 "data/maps/NewMap3/scripts.pory"
	msgbox ( StevenGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 61 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_DEFEATED_STEVENGYM
# 62 "data/maps/NewMap3/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 63 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 64 "data/maps/NewMap3/scripts.pory"
	waitmessage
	end


SecondGym_EventScript_StevenDefeated::
# 75 "data/maps/NewMap3/scripts.pory"
	message SecondGym_Text_ReceivedStevenBadge
# 76 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 77 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 78 "data/maps/NewMap3/scripts.pory"
	msgbox ( StevenGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 79 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_DEFEATED_STEVENGYM
# 80 "data/maps/NewMap3/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 81 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 82 "data/maps/NewMap3/scripts.pory"
	waitmessage
	end


ThirdGym_EventScript_StevenDefeated::
# 93 "data/maps/NewMap3/scripts.pory"
	message ThirdGym_Text_ReceivedStevenBadge
# 94 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 95 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/NewMap3/scripts.pory"
	msgbox ( StevenGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 97 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_DEFEATED_STEVENGYM
# 98 "data/maps/NewMap3/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 99 "data/maps/NewMap3/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/NewMap3/scripts.pory"
	waitmessage
	end


FirstGym_Text_ReceivedStevenBadge::
# 69 "data/maps/NewMap3/scripts.pory"
	.string "{PLAYER} received their first badge!$"

SecondGym_Text_ReceivedStevenBadge::
# 87 "data/maps/NewMap3/scripts.pory"
	.string "{PLAYER} received their second badge!$"

ThirdGym_Text_ReceivedStevenBadge::
# 105 "data/maps/NewMap3/scripts.pory"
	.string "{PLAYER} received their third badge!$"

FirstGym_StevenIntro::
# 111 "data/maps/NewMap3/scripts.pory"
	.string "Let's have a good one, shall we?.$"

FirstGym_StevenDefeat::
# 115 "data/maps/NewMap3/scripts.pory"
	.string "I wasn't expecting this...$"

SecondGym_StevenIntro::
# 119 "data/maps/NewMap3/scripts.pory"
	.string "You look strong! Let's battle!$"

SecondGym_Text_StevenDefeat::
# 123 "data/maps/NewMap3/scripts.pory"
	.string "You are indeed strong...$"

ThirdGym_StevenIntro::
# 127 "data/maps/NewMap3/scripts.pory"
	.string "I was waiting for you!$"

ThirdGym_StevenDefeat::
# 131 "data/maps/NewMap3/scripts.pory"
	.string "So this is it...$"

StevenGym_Text_BadgeInfoTakeThis::
# 135 "data/maps/NewMap3/scripts.pory"
	.string "This badge is proof of your strength.$"

LittlerootTown_Gym_Text_StevenPostBattle::
# 139 "data/maps/NewMap3/scripts.pory"
	.string "Good luck moving forward.$"
