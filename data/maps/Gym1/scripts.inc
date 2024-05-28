Gym1_MapScripts::
	.byte 0


Littleroot_Gym1_EventScript_Lucy::
# 4 "data/maps/Gym1/scripts.pory"
	lock
# 5 "data/maps/Gym1/scripts.pory"
	faceplayer
# 6 "data/maps/Gym1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LUCYGYM, Littleroot_Gym1_EventScript_Lucy_2
# 18 "data/maps/Gym1/scripts.pory"
	msgbox LittlerootTown_Gym_Text_LucyPostBattle
Littleroot_Gym1_EventScript_Lucy_1:
# 20 "data/maps/Gym1/scripts.pory"
	waitmessage
# 21 "data/maps/Gym1/scripts.pory"
	releaseall
	end

Littleroot_Gym1_EventScript_Lucy_2:
# 7 "data/maps/Gym1/scripts.pory"
	switch VAR_BADGENUMBER_STATE
# 8 "data/maps/Gym1/scripts.pory"
	case 0, Littleroot_Gym1_EventScript_Lucy_6
# 10 "data/maps/Gym1/scripts.pory"
	case 1, Littleroot_Gym1_EventScript_Lucy_7
# 12 "data/maps/Gym1/scripts.pory"
	case 2, Littleroot_Gym1_EventScript_Lucy_8
	goto Littleroot_Gym1_EventScript_Lucy_1

Littleroot_Gym1_EventScript_Lucy_6:
# 9 "data/maps/Gym1/scripts.pory"
	call LittlerootTown_Gym_EventScript_LucyNoBadges
	goto Littleroot_Gym1_EventScript_Lucy_1

Littleroot_Gym1_EventScript_Lucy_7:
# 11 "data/maps/Gym1/scripts.pory"
	call LittlerootTown_Gym_EventScript_LucyOneBadge
	goto Littleroot_Gym1_EventScript_Lucy_1

Littleroot_Gym1_EventScript_Lucy_8:
# 13 "data/maps/Gym1/scripts.pory"
	call LittlerootTown_Gym_EventScript_LucyTwoBadges
	goto Littleroot_Gym1_EventScript_Lucy_1


LittlerootTown_Gym_EventScript_LucyNoBadges::
# 27 "data/maps/Gym1/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, FirstGym_LucyIntro, FirstGym_LucyDefeat, FirstGym_EventScript_LucyDefeated, NO_MUSIC
# 28 "data/maps/Gym1/scripts.pory"
	msgbox LittlerootTown_Gym_Text_LucyPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Gym1/scripts.pory"
	waitmessage
# 30 "data/maps/Gym1/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_LucyOneBadge::
# 36 "data/maps/Gym1/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, SecondGym_LucyIntro, SecondGym_Text_LucyDefeat, SecondGym_EventScript_LucyDefeated, NO_MUSIC
# 37 "data/maps/Gym1/scripts.pory"
	msgbox LittlerootTown_Gym_Text_LucyPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Gym1/scripts.pory"
	waitmessage
# 39 "data/maps/Gym1/scripts.pory"
	release
	end


LittlerootTown_Gym_EventScript_LucyTwoBadges::
# 45 "data/maps/Gym1/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_TORCHIC, ThirdGym_LucyIntro, ThirdGym_LucyDefeat, ThirdGym_EventScript_LucyDefeated, NO_MUSIC
# 46 "data/maps/Gym1/scripts.pory"
	msgbox LittlerootTown_Gym_Text_LucyPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Gym1/scripts.pory"
	waitmessage
# 48 "data/maps/Gym1/scripts.pory"
	release
	end


FirstGym_EventScript_LucyDefeated::
# 57 "data/maps/Gym1/scripts.pory"
	message FirstGym_Text_ReceivedLucyBadge
# 58 "data/maps/Gym1/scripts.pory"
	waitmessage
# 59 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 60 "data/maps/Gym1/scripts.pory"
	msgbox ( LucyGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 61 "data/maps/Gym1/scripts.pory"
	setflag FLAG_DEFEATED_LUCYGYM
# 62 "data/maps/Gym1/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 63 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 64 "data/maps/Gym1/scripts.pory"
	waitmessage
	end


SecondGym_EventScript_LucyDefeated::
# 75 "data/maps/Gym1/scripts.pory"
	message SecondGym_Text_ReceivedLucyBadge
# 76 "data/maps/Gym1/scripts.pory"
	waitmessage
# 77 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 78 "data/maps/Gym1/scripts.pory"
	msgbox ( LucyGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 79 "data/maps/Gym1/scripts.pory"
	setflag FLAG_DEFEATED_LUCYGYM
# 80 "data/maps/Gym1/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 81 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 82 "data/maps/Gym1/scripts.pory"
	waitmessage
	end


ThirdGym_EventScript_LucyDefeated::
# 93 "data/maps/Gym1/scripts.pory"
	message ThirdGym_Text_ReceivedLucyBadge
# 94 "data/maps/Gym1/scripts.pory"
	waitmessage
# 95 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/Gym1/scripts.pory"
	msgbox ( LucyGym_Text_BadgeInfoTakeThis ), MSGBOX_AUTOCLOSE
# 97 "data/maps/Gym1/scripts.pory"
	setflag FLAG_DEFEATED_LUCYGYM
# 98 "data/maps/Gym1/scripts.pory"
	addvar ( VAR_BADGENUMBER_STATE ), 1
# 99 "data/maps/Gym1/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/Gym1/scripts.pory"
	waitmessage
	end


FirstGym_Text_ReceivedLucyBadge::
# 69 "data/maps/Gym1/scripts.pory"
	.string "{PLAYER} received their first badge!$"

SecondGym_Text_ReceivedLucyBadge::
# 87 "data/maps/Gym1/scripts.pory"
	.string "{PLAYER} received their second badge!$"

ThirdGym_Text_ReceivedLucyBadge::
# 105 "data/maps/Gym1/scripts.pory"
	.string "{PLAYER} received their third badge!$"

FirstGym_LucyIntro::
# 111 "data/maps/Gym1/scripts.pory"
	.string "So this is your first gym, huh?$"

FirstGym_LucyDefeat::
# 115 "data/maps/Gym1/scripts.pory"
	.string "I underestimated you!$"

SecondGym_LucyIntro::
# 119 "data/maps/Gym1/scripts.pory"
	.string "I see you already got one badge!$"

SecondGym_Text_LucyDefeat::
# 123 "data/maps/Gym1/scripts.pory"
	.string "Great job on your second badge!$"

ThirdGym_LucyIntro::
# 127 "data/maps/Gym1/scripts.pory"
	.string "I am going all out!$"

ThirdGym_LucyDefeat::
# 131 "data/maps/Gym1/scripts.pory"
	.string "You are tough!$"

LucyGym_Text_BadgeInfoTakeThis::
# 135 "data/maps/Gym1/scripts.pory"
	.string "This badge is proof of your strength.$"

LittlerootTown_Gym_Text_LucyPostBattle::
# 139 "data/maps/Gym1/scripts.pory"
	.string "Good luck moving forward.$"
